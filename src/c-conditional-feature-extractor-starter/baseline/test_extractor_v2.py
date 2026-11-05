import json
import sys
from pathlib import Path

import tree_sitter
import tree_sitter_c


# Khởi tạo parser cho ngôn ngữ C.
C_LANGUAGE = tree_sitter.Language(tree_sitter_c.language())
PARSER = tree_sitter.Parser(C_LANGUAGE)


# Danh sách đầy đủ 22 đặc trưng bắt buộc theo Feature_Specification.xlsx
FEATURE_NAMES = (
    # 1. Nhóm đặc trưng cấu trúc (Structural - 8 đặc trưng)
    "if_count",
    "if_else_count",
    "else_if_count",
    "switch_count",
    "case_count",
    "default_count",
    "ternary_count",
    "max_nesting_depth",
    # 2. Nhóm toán tử so sánh trong condition (Comparison operators - 6 đặc trưng)
    "lt_count",
    "le_count",
    "gt_count",
    "ge_count",
    "eq_count",
    "ne_count",
    # 3. Nhóm toán tử logic trong condition (Logical operators - 3 đặc trưng)
    "and_count",
    "or_count",
    "not_count",
    # 4. Nhóm độ phức tạp điều kiện (Condition complexity - 3 đặc trưng)
    "condition_count",
    "simple_condition_count",
    "compound_condition_count",
    # 5. Nhóm hằng số / ngưỡng trong condition (Constants / thresholds - 2 đặc trưng)
    "constant_count",
    "unique_constant_count",
)

FEATURE_GROUPS = {
    "1. Cấu trúc rẽ nhánh (Structural)": (
        "if_count",
        "if_else_count",
        "else_if_count",
        "switch_count",
        "case_count",
        "default_count",
        "ternary_count",
        "max_nesting_depth",
    ),
    "2. Toán tử so sánh (Comparison Operators)": (
        "lt_count",
        "le_count",
        "gt_count",
        "ge_count",
        "eq_count",
        "ne_count",
    ),
    "3. Toán tử logic (Logical Operators)": (
        "and_count",
        "or_count",
        "not_count",
    ),
    "4. Độ phức tạp điều kiện (Condition Complexity)": (
        "condition_count",
        "simple_condition_count",
        "compound_condition_count",
    ),
    "5. Hằng số & Ngưỡng (Constants / Thresholds)": (
        "constant_count",
        "unique_constant_count",
    ),
}

COMPARISON_OP_MAP = {
    "<": "lt_count",
    "<=": "le_count",
    ">": "gt_count",
    ">=": "ge_count",
    "==": "eq_count",
    "!=": "ne_count",
}

LOGICAL_BINARY_OP_MAP = {
    "&&": "and_count",
    "||": "or_count",
}


def new_feature_counts():
    """Tạo bộ đếm mới cho toàn bộ 22 đặc trưng, tất cả giá trị bắt đầu từ 0."""
    return {name: 0 for name in FEATURE_NAMES}


def get_field(node, field_name):
    """Lấy node con theo field name; trả về None nếu field không tồn tại."""
    try:
        return node.child_by_field_name(field_name)
    except (AttributeError, TypeError):
        return None


def get_node_text(node, source_bytes):
    """Trích xuất chuỗi văn bản UTF-8 của một node từ source_bytes."""
    if node is None:
        return ""
    return source_bytes[node.start_byte:node.end_byte].decode("utf-8", errors="replace").strip()


def unwrap_parentheses_text(node, source_bytes):
    """
    Lấy văn bản biểu thức điều kiện đã lược bỏ cặp ngoặc đơn bọc ngoài cùng
    (ví dụ: '(a > 0 && b < 5)' -> 'a > 0 && b < 5') để khớp chuẩn conditions.jsonl.
    """
    if node is None:
        return ""
    curr = node
    while curr.type == "parenthesized_expression" and len(curr.named_children) == 1:
        curr = curr.named_children[0]
    text = get_node_text(curr, source_bytes)
    return " ".join(text.split())


def find_else_if_node(alternative_node):
    """
    Tìm if_statement của nhánh else-if ngay trong alternative (else_clause).
    Cho phép node bọc trung gian (như else_clause), nhưng KHÔNG đi xuyên vào
    compound_statement: một lệnh if nằm trong else { if (...) {} } là if lồng
    thực sự (Rule R04), không phải mắt xích else-if (Rule R01, R03).
    """
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
    """
    Xác định một case_statement có phải nhãn default hay không.
    Trong grammar tree-sitter-c, cả 'case X:' và 'default:' đều có node.type == 'case_statement'.
    Nhãn 'case X:' có field 'value', còn nhãn 'default:' không có field 'value'.
    """
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
    """Lấy ký hiệu toán tử từ binary_expression hoặc unary_expression."""
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
    """
    Phân tích chuyên sâu một nhánh điều kiện (condition field) của if, else-if hoặc ternary (?:).
    Trích xuất:
    - Tần suất 6 toán tử so sánh (<, <=, >, >=, ==, !=)
    - Tần suất 3 toán tử logic (&&, ||, !)
    - Danh sách hằng số literal (number_literal, char_literal)
    - Phân loại điều kiện đơn (simple) hay điều kiện ghép (compound) theo Rule R06.
    """
    result = {
        "lt_count": 0,
        "le_count": 0,
        "gt_count": 0,
        "ge_count": 0,
        "eq_count": 0,
        "ne_count": 0,
        "and_count": 0,
        "or_count": 0,
        "not_count": 0,
        "comparison_operators": [],
        "logical_operators": [],
        "constants": [],
        "is_compound": False,
        "expression": unwrap_parentheses_text(condition_node, source_bytes),
    }

    if condition_node is None:
        return result

    def walk_cond(node):
        # Nếu bên trong biểu thức điều kiện có chứa một toán tử 3 ngôi lồng bên trong,
        # phần condition của toán tử 3 ngôi đó sẽ được xử lý riêng khi duyệt tới node đó
        # để tránh đếm trùng (double counting).
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

    # Rule R06: Condition có ít nhất một && hoặc || là compound; ngược lại là simple.
    # Toán tử phủ định ! không làm condition trở thành compound.
    result["is_compound"] = (result["and_count"] + result["or_count"]) > 0
    return result


def calculate_max_nesting_depth(root_node):
    """
    Tính độ sâu lồng nhau tối đa (max_nesting_depth) của:
    - if_statement
    - switch_statement
    - conditional_expression (toán tử ?:)

    Lưu ý quan trọng:
    - KHÔNG sử dụng hàm id(node) của Python trên đối tượng tree_sitter.Node vì mỗi lần
      gọi child_by_field_name() hoặc duyệt node.children, Tree-sitter tạo ra một Python
      wrapper mới có id() khác nhau, gây lỗi duyệt lặp cấp số nhân.
    - Với if_statement, chỉ duyệt đúng 3 trường ngữ pháp: condition, consequence, alternative.
    """
    control_types = {
        "if_statement",
        "switch_statement",
        "conditional_expression",
    }

    max_depth = 0

    def visit(node, depth=0, is_else_if=False):
        nonlocal max_depth
        if node is None:
            return

        if node.type not in control_types:
            for child in node.children:
                visit(child, depth, False)
            return

        current_depth = depth if is_else_if else depth + 1
        max_depth = max(max_depth, current_depth)

        if node.type == "if_statement":
            condition = get_field(node, "condition")
            consequence = get_field(node, "consequence")
            alternative = get_field(node, "alternative")

            if condition is not None:
                visit(condition, current_depth, False)

            if consequence is not None:
                visit(consequence, current_depth, False)

            if alternative is not None:
                else_if_node = find_else_if_node(alternative)
                if else_if_node is not None:
                    # Mắt xích else-if: giữ nguyên current_depth
                    visit(else_if_node, current_depth, True)
                else:
                    # Nhánh else thường: các cấu trúc bên trong sẽ tăng độ sâu
                    visit(alternative, current_depth, False)

        else:
            # switch_statement và conditional_expression
            for child in node.children:
                visit(child, current_depth, False)

    visit(root_node, 0, False)
    return max_depth


def extract_features_and_conditions(root_node, source_bytes):
    """
    Hàm cốt lõi trích xuất đồng thời:
    1. Toàn bộ 22 đặc trưng cấp chương trình (features dict - chuẩn features.csv).
    2. Danh sách chi tiết từng biểu thức điều kiện (condition_records list - chuẩn conditions.jsonl).
    """
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

        for op_key in (
            "lt_count",
            "le_count",
            "gt_count",
            "ge_count",
            "eq_count",
            "ne_count",
            "and_count",
            "or_count",
            "not_count",
        ):
            features[op_key] += cond_info[op_key]

        features["constant_count"] += len(cond_info["constants"])
        for c_val in cond_info["constants"]:
            unique_constants.add(c_val)

        condition_records.append(
            {
                "line": line_no,
                "type": cond_type,
                "depth": depth,
                "expression": cond_info["expression"],
                "is_compound": cond_info["is_compound"],
                "comparison_operators": cond_info["comparison_operators"],
                "logical_operators": cond_info["logical_operators"],
                "constants": cond_info["constants"],
            }
        )

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

            # Phân tích biểu thức điều kiện của if / else-if
            record_condition(condition, cond_type, current_depth, node.start_point[0] + 1)

            # Kiểm tra nhánh alternative (else / else-if)
            else_if_child = None
            if alternative is not None:
                else_if_child = find_else_if_node(alternative)
                if else_if_child is not None:
                    features["else_if_count"] += 1
                else:
                    features["if_else_count"] += 1

            # Duyệt đúng 3 trường ngữ pháp của if_statement (không dùng vòng lặp node.children
            # với id() để tránh lỗi nhân đôi nhánh do Python wrapper của Tree-sitter)
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


def extract_all_features(root_node, source_bytes):
    """
    Trích xuất toàn bộ 22 đặc trưng từ cây AST của chương trình C.
    """
    features, _ = extract_features_and_conditions(root_node, source_bytes)
    return features


def extract_condition_details(root_node, source_bytes):
    """Trả về danh sách chi tiết từng biểu thức điều kiện (dùng cho UI và conditions.jsonl)."""
    _, condition_records = extract_features_and_conditions(root_node, source_bytes)
    return condition_records


def print_ast(node, source_bytes, indent="", is_last=True, is_root=True, max_text_length=100):
    """In AST dưới dạng cây trực quan (an toàn cho mọi Terminal)."""
    text = source_bytes[node.start_byte:node.end_byte].decode("utf-8", errors="replace")
    text = " ".join(text.split())
    if len(text) > max_text_length:
        text = text[: max_text_length - 3] + "..."

    if is_root:
        print(f"{node.type}: {text!r}")
        child_indent = ""
    else:
        branch = "└── " if is_last else "├── "
        print(f"{indent}{branch}{node.type}: {text!r}")
        child_indent = indent + ("    " if is_last else "│   ")

    children = node.children
    for i, child in enumerate(children):
        is_last_child = i == len(children) - 1
        print_ast(child, source_bytes, child_indent, is_last_child, False, max_text_length)


def main():
    if len(sys.argv) < 2:
        print("Cú pháp: python test_extractor_v2.py <đường_dẫn_file_c> [--show-conditions] [--show-ast]")
        print("Ví dụ:  python test_extractor_v2.py example.c --show-conditions")
        sys.exit(2)

    file_path = Path(sys.argv[1])

    if not file_path.is_file():
        print(f"Lỗi: không tìm thấy file: {file_path}")
        sys.exit(2)

    try:
        source_bytes = file_path.read_bytes()
    except OSError as exc:
        print(f"Lỗi khi đọc file: {exc}")
        sys.exit(2)

    tree = PARSER.parse(source_bytes)
    root = tree.root_node

    print(f"=== KẾT QUẢ PHÂN TÍCH (22 ĐẶC TRƯNG): {file_path} ===")
    print(f"Lỗi cú pháp trong AST: {'CÓ' if root.has_error else 'KHÔNG'}")

    if root.has_error:
        print(
            "Cảnh báo: Tree-sitter vẫn có thể tạo cây khi mã C có lỗi cú pháp; "
            "kết quả đếm có thể chưa đầy đủ."
        )

    features, conditions = extract_features_and_conditions(root, source_bytes)

    NL = chr(10)
    for group_title, keys in FEATURE_GROUPS.items():
        print(f"{NL}[{group_title}]")
        for name in keys:
            print(f" - {name:<26}: {features[name]}")

    if "--show-conditions" in sys.argv[2:]:
        print(f"{NL}=== CHI TIẾT BIỂU THỨC ĐIỀU KIỆN (conditions.jsonl) ===")
        for idx, rec in enumerate(conditions, 1):
            print(f" #{idx} (Dòng {rec['line']}, Loại: {rec['type']}, Độ sâu: {rec['depth']}): {rec['expression']}")
            print(
                f"     So sánh: {rec['comparison_operators']} | "
                f"Logic: {rec['logical_operators']} | "
                f"Hằng số: {rec['constants']} | "
                f"Phân loại: {'Ghép (Compound)' if rec['is_compound'] else 'Đơn (Simple)'}"
            )

    if "--show-ast" in sys.argv[2:]:
        print(f"{NL}=== AST (dùng để kiểm tra grammar) ===")
        print_ast(root, source_bytes)


if __name__ == "__main__":
    main()
