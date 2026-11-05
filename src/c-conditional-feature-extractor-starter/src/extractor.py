from src.models import COMPARISON_OP_MAP, LOGICAL_BINARY_OP_MAP, new_feature_counts

def get_field(node, field_name):
    """Lấy node con theo field name."""
    try:
        return node.child_by_field_name(field_name)
    except (AttributeError, TypeError):
        return None

def get_node_text(node, source_bytes):
    """Trích xuất chuỗi văn bản của một node."""
    if node is None:
        return ""
    return source_bytes[node.start_byte:node.end_byte].decode("utf-8", errors="replace").strip()

def unwrap_parentheses_text(node, source_bytes):
    """Lấy văn bản biểu thức điều kiện đã lược bỏ ngoặc bọc ngoài."""
    if node is None:
        return ""
    curr = node
    while curr.type == "parenthesized_expression" and len(curr.named_children) == 1:
        curr = curr.named_children[0]
    text = get_node_text(curr, source_bytes)
    return " ".join(text.split())

def find_else_if_node(alternative_node):
    """Tìm if_statement của nhánh else-if."""
    if alternative_node is None:
        return None
    if alternative_node.type == "if_statement":
        return alternative_node
    if alternative_node.type == "compound_statement":
        return None

    for child in alternative_node.named_children:
        if child.type == "if_statement":
            return child
        if child.type == "compound_statement":
            return None
        found = find_else_if_node(child)
        if found is not None:
            return found
    return None

def is_default_label(node, source_bytes):
    """Kiểm tra nhãn case có phải là default hay không."""
    if node.type != "case_statement":
        return False
    value_node = get_field(node, "value")
    if value_node is None:
        for child in node.children:
            if child.type == ":":
                break
            text = source_bytes[child.start_byte:child.end_byte].strip()
            if text == b"default":
                return True
        return True
    value_text = source_bytes[value_node.start_byte:value_node.end_byte].strip()
    return value_text == b"default"

def get_operator_text(expr_node, source_bytes):
    """Lấy ký hiệu toán tử từ biểu thức."""
    op_node = get_field(expr_node, "operator")
    if op_node is not None:
        return get_node_text(op_node, source_bytes)
    for child in expr_node.children:
        if not child.is_named:
            op_txt = get_node_text(child, source_bytes)
            if op_txt:
                return op_txt
    return ""

def analyze_condition(condition_node, source_bytes):
    """Phân tích một nhánh điều kiện, đếm toán tử và hằng số."""
    result = {
        "lt_count": 0, "le_count": 0, "gt_count": 0, "ge_count": 0, "eq_count": 0, "ne_count": 0,
        "and_count": 0, "or_count": 0, "not_count": 0,
        "comparison_operators": [], "logical_operators": [], "constants": [],
        "is_compound": False,
        "expression": unwrap_parentheses_text(condition_node, source_bytes),
    }

    if condition_node is None:
        return result

    def walk_cond(node):
        if node.type == "conditional_expression" and node != condition_node:
            return
        if node.type == "binary_expression":
            op_txt = get_operator_text(node, source_bytes)
            if op_txt in COMPARISON_OP_MAP:
                feat_key = COMPARISON_OP_MAP[op_txt]
                result[feat_key] += 1
                result["comparison_operators"].append(op_txt)
            elif op_txt in LOGICAL_BINARY_OP_MAP:
                feat_key = LOGICAL_BINARY_OP_MAP[op_txt]
                result[feat_key] += 1
                result["logical_operators"].append(op_txt)
        elif node.type == "unary_expression":
            op_txt = get_operator_text(node, source_bytes)
            if op_txt == "!":
                result["not_count"] += 1
                result["logical_operators"].append("!")
        elif node.type in ("number_literal", "char_literal"):
            lit_txt = get_node_text(node, source_bytes)
            if lit_txt:
                result["constants"].append(lit_txt)

        for child in node.children:
            walk_cond(child)

    walk_cond(condition_node)
    result["is_compound"] = (result["and_count"] + result["or_count"]) > 0
    return result

def extract_features_and_conditions(root_node, source_bytes):
    """Hàm lõi bóc tách 22 đặc trưng và chi tiết biểu thức điều kiện từ AST."""
    features = new_feature_counts()
    unique_constants = set()
    condition_records = []

    def record_condition(cond_node, cond_type, depth, line_no):
        cond_info = analyze_condition(cond_node, source_bytes)
        features["condition_count"] += 1
        if cond_info["is_compound"]:
            features["compound_condition_count"] += 1
        else:
            features["simple_condition_count"] += 1

        for op_key in ("lt_count", "le_count", "gt_count", "ge_count", "eq_count", "ne_count", "and_count", "or_count", "not_count"):
            features[op_key] += cond_info[op_key]

        features["constant_count"] += len(cond_info["constants"])
        for c_val in cond_info["constants"]:
            unique_constants.add(c_val)

        condition_records.append({
            "line": line_no,
            "type": cond_type,
            "depth": depth,
            "expression": cond_info["expression"],
            "is_compound": cond_info["is_compound"],
            "comparison_operators": cond_info["comparison_operators"],
            "logical_operators": cond_info["logical_operators"],
            "constants": cond_info["constants"],
        })

    def visit(node, depth=0, is_else_if=False):
        if node is None:
            return

        if node.type == "if_statement":
            features["if_count"] += 1
            current_depth = depth if is_else_if else depth + 1
            features["max_nesting_depth"] = max(features["max_nesting_depth"], current_depth)

            cond_type = "else_if" if is_else_if else "if"
            condition = get_field(node, "condition")
            consequence = get_field(node, "consequence")
            alternative = get_field(node, "alternative")

            record_condition(condition, cond_type, current_depth, node.start_point[0] + 1)

            else_if_child = None
            if alternative is not None:
                else_if_child = find_else_if_node(alternative)
                if else_if_child is not None:
                    features["else_if_count"] += 1
                else:
                    features["if_else_count"] += 1

            if condition is not None:
                visit(condition, current_depth, False)
            if consequence is not None:
                visit(consequence, current_depth, False)
            if alternative is not None:
                if else_if_child is not None:
                    visit(else_if_child, current_depth, True)
                else:
                    visit(alternative, current_depth, False)
            return

        elif node.type == "switch_statement":
            features["switch_count"] += 1
            current_depth = depth + 1
            features["max_nesting_depth"] = max(features["max_nesting_depth"], current_depth)
            for child in node.children:
                visit(child, current_depth, False)
            return

        elif node.type == "case_statement":
            if is_default_label(node, source_bytes):
                features["default_count"] += 1
            else:
                features["case_count"] += 1
            for child in node.children:
                visit(child, depth, False)
            return

        elif node.type == "conditional_expression":
            features["ternary_count"] += 1
            current_depth = depth + 1
            features["max_nesting_depth"] = max(features["max_nesting_depth"], current_depth)

            condition = get_field(node, "condition")
            record_condition(condition, "ternary", current_depth, node.start_point[0] + 1)

            for child in node.children:
                visit(child, current_depth, False)
            return

        for child in node.children:
            visit(child, depth, False)

    visit(root_node, 0, False)
    features["unique_constant_count"] = len(unique_constants)
    return features, condition_records
