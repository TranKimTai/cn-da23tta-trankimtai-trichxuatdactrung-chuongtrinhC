from src.extractor import (
    get_field,
    get_node_text,
    unwrap_parentheses_text,
    find_else_if_node,
    is_default_label
)

NL = chr(10)
BS = chr(92)

def collect_ast_branches(root_node, source_bytes):
    branches = [
        {
            "label": "🌐 0. Xem tất cả (Toàn bộ cây AST — translation_unit)",
            "node": root_node,
        }
    ]
    counter = 1

    def walk_branches(node, is_else_if=False):
        nonlocal counter
        if node is None:
            return

        line_start = node.start_point[0] + 1
        line_end = node.end_point[0] + 1

        if node.type == "function_definition":
            decl = get_field(node, "declarator")
            fn_name = get_node_text(decl, source_bytes) if decl else "function"
            branches.append({"label": f"📦 {counter}. Hàm `{fn_name}` (Dòng {line_start}–{line_end})", "node": node})
            counter += 1

        elif node.type == "if_statement":
            cond_node = get_field(node, "condition")
            cond_txt = unwrap_parentheses_text(cond_node, source_bytes)
            tag = "Nhánh else-if" if is_else_if else "Cấu trúc if"
            branches.append({"label": f"🔀 {counter}. {tag}: `if ({cond_txt})` (Dòng {line_start}–{line_end})", "node": node})
            counter += 1

            if cond_node is not None:
                branches.append({"label": f"   🎯 {counter}. Chỉ riêng Biểu thức điều kiện: `{cond_txt}` (Dòng {line_start})", "node": cond_node})
                counter += 1

            consequence = get_field(node, "consequence")
            alternative = get_field(node, "alternative")
            if cond_node is not None:
                walk_branches(cond_node, False)
            if consequence is not None:
                walk_branches(consequence, False)
            if alternative is not None:
                else_if_child = find_else_if_node(alternative)
                if else_if_child is not None:
                    walk_branches(else_if_child, True)
                else:
                    branches.append({"label": f"↪️ {counter}. Nhánh `else` (Dòng {alternative.start_point[0] + 1}–{alternative.end_point[0] + 1})", "node": alternative})
                    counter += 1
                    walk_branches(alternative, False)
            return

        elif node.type == "switch_statement":
            cond_node = get_field(node, "condition")
            cond_txt = unwrap_parentheses_text(cond_node, source_bytes)
            branches.append({"label": f"🎛️ {counter}. Cấu trúc `switch ({cond_txt})` (Dòng {line_start}–{line_end})", "node": node})
            counter += 1

        elif node.type == "case_statement":
            if is_default_label(node, source_bytes):
                branches.append({"label": f"   📍 {counter}. Nhãn `default:` (Dòng {line_start}–{line_end})", "node": node})
            else:
                val_node = get_field(node, "value")
                val_txt = get_node_text(val_node, source_bytes)
                branches.append({"label": f"   📍 {counter}. Nhãn `case {val_txt}:` (Dòng {line_start}–{line_end})", "node": node})
            counter += 1

        elif node.type == "conditional_expression":
            expr_txt = " ".join(get_node_text(node, source_bytes).split())
            branches.append({"label": f"❓ {counter}. Toán tử 3 ngôi `?:`: `{expr_txt}` (Dòng {line_start})", "node": node})
            counter += 1

        for child in node.named_children:
            walk_branches(child, False)

    walk_branches(root_node, False)
    return branches


def generate_mermaid_ast(target_nodes, source_bytes, show_fields=True, highlight_nodes=True, hide_comments=False):
    if not isinstance(target_nodes, (list, tuple)):
        target_nodes = [target_nodes]

    lines = [
        "graph TD",
        "    classDef branchNode fill:#fef3c7,stroke:#d97706,stroke-width:2px,color:#78350f;",
        "    classDef exprNode fill:#dbeafe,stroke:#2563eb,stroke-width:1.8px,color:#1e3a8a;",
        "    classDef leafNode fill:#dcfce7,stroke:#16a34a,stroke-width:1.5px,color:#14532d;",
        "    classDef defaultNode fill:#f8fafc,stroke:#64748b,stroke-width:1px,color:#0f172a;",
    ]
    node_counter = 0

    branch_types = {"if_statement", "else_clause", "switch_statement", "case_statement", "conditional_expression"}
    expr_types = {"binary_expression", "unary_expression", "parenthesized_expression"}

    def escape_mermaid(text):
        if not text: return ""
        replacements = {"<": "＜", ">": "＞", "&": "＆", '"': "＂", "'": "＇", BS: "＼", "[": "［", "]": "］", "{": "｛", "}": "｝", "(": "（", ")": "）", "#": "＃", ";": "；", ":": "：", "|": "｜", "`": "｀"}
        for k, v in replacements.items():
            text = text.replace(k, v)
        return text

    def walk(n):
        nonlocal node_counter
        my_id = f"N{node_counter}"
        node_counter += 1

        text = source_bytes[n.start_byte:n.end_byte].decode("utf-8", errors="replace")
        text = " ".join(text.split())
        safe_text, safe_type = escape_mermaid(text), escape_mermaid(n.type)

        op_node = n.child_by_field_name("operator") if hasattr(n, "child_by_field_name") else None
        if op_node is not None:
            op_str = source_bytes[op_node.start_byte:op_node.end_byte].decode("utf-8", errors="replace").strip()
            label = f"{safe_type}<br/><b>({escape_mermaid(op_str)})</b>"
        elif len(n.named_children) == 0:
            label = f"{safe_type}<br/><b>({safe_text})</b>"
        else:
            label = f"{safe_type}"

        lines.append(f'    {my_id}["{label}"]')

        if highlight_nodes:
            if n.type in branch_types: lines.append(f"    class {my_id} branchNode;")
            elif n.type in expr_types: lines.append(f"    class {my_id} exprNode;")
            elif len(n.named_children) == 0: lines.append(f"    class {my_id} leafNode;")
            else: lines.append(f"    class {my_id} defaultNode;")

        for idx in range(n.child_count):
            child = n.child(idx)
            if child.is_named:
                if hide_comments and child.type == "comment": continue
                child_id = walk(child)
                field_name = n.field_name_for_child(idx) if show_fields else None
                if field_name: lines.append(f"    {my_id} -->|{field_name}| {child_id}")
                else: lines.append(f"    {my_id} --> {child_id}")

        return my_id

    for t_node in target_nodes:
        if t_node is not None: walk(t_node)
    return NL.join(lines)
