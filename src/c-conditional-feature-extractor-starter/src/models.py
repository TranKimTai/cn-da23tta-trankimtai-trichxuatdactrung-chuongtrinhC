FEATURE_NAMES = (
    # Nhóm 1: Đặc trưng Cấu trúc rẽ nhánh (Structural)
    "if_count",
    "if_else_count",
    "else_if_count",
    "switch_count",
    "case_count",
    "default_count",
    "ternary_count",
    "max_nesting_depth",
    # Nhóm 2: Đặc trưng Toán tử so sánh trong điều kiện (Comparison)
    "lt_count",
    "le_count",
    "gt_count",
    "ge_count",
    "eq_count",
    "ne_count",
    # Nhóm 3: Đặc trưng Toán tử logic trong điều kiện (Logical)
    "and_count",
    "or_count",
    "not_count",
    # Nhóm 4: Đặc trưng Độ phức tạp biểu thức điều kiện (Complexity)
    "condition_count",
    "simple_condition_count",
    "compound_condition_count",
    # Nhóm 5: Đặc trưng Hằng số & Ngưỡng so sánh (Constants)
    "constant_count",
    "unique_constant_count",
)

FEATURE_GROUPS = {
    "Nhóm 1: Đặc trưng Cấu trúc rẽ nhánh (Structural — 8 đặc trưng)": (
        "if_count",
        "if_else_count",
        "else_if_count",
        "switch_count",
        "case_count",
        "default_count",
        "ternary_count",
        "max_nesting_depth",
    ),
    "Nhóm 2: Đặc trưng Toán tử so sánh trong điều kiện (Comparison — 6 đặc trưng)": (
        "lt_count",
        "le_count",
        "gt_count",
        "ge_count",
        "eq_count",
        "ne_count",
    ),
    "Nhóm 3: Đặc trưng Toán tử logic trong điều kiện (Logical — 3 đặc trưng)": (
        "and_count",
        "or_count",
        "not_count",
    ),
    "Nhóm 4: Đặc trưng Độ phức tạp biểu thức điều kiện (Complexity — 3 đặc trưng)": (
        "condition_count",
        "simple_condition_count",
        "compound_condition_count",
    ),
    "Nhóm 5: Đặc trưng Hằng số & Ngưỡng so sánh (Constants — 2 đặc trưng)": (
        "constant_count",
        "unique_constant_count",
    ),
}

FEATURE_DESCRIPTIONS = {
    "if_count": "Tổng số câu lệnh if (bao gồm cả các nhánh else-if)",
    "if_else_count": "Số câu lệnh if có nhánh else trực tiếp (không phải else-if)",
    "else_if_count": "Số nhánh else-if nằm trong chuỗi rẽ nhánh bậc thang",
    "switch_count": "Tổng số cấu trúc lựa chọn switch",
    "case_count": "Tổng số nhãn case có giá trị (không tính default)",
    "default_count": "Tổng số nhãn default trong các khối switch",
    "ternary_count": "Tổng số biểu thức toán tử điều kiện ba ngôi (? :)",
    "max_nesting_depth": "Độ sâu lồng nhau tối đa của cấu trúc điều kiện (else-if không làm tăng độ sâu)",
    "lt_count": "Số lần xuất hiện toán tử nhỏ hơn (<) trong điều kiện",
    "le_count": "Số lần xuất hiện toán tử nhỏ hơn hoặc bằng (<=) trong điều kiện",
    "gt_count": "Số lần xuất hiện toán tử lớn hơn (>) trong điều kiện",
    "ge_count": "Số lần xuất hiện toán tử lớn hơn hoặc bằng (>=) trong điều kiện",
    "eq_count": "Số lần xuất hiện toán tử bằng (==) trong điều kiện",
    "ne_count": "Số lần xuất hiện toán tử khác (!=) trong điều kiện",
    "and_count": "Số lần xuất hiện toán tử hội logic (&&) trong điều kiện",
    "or_count": "Số lần xuất hiện toán tử tuyển logic (||) trong điều kiện",
    "not_count": "Số lần xuất hiện toán tử phủ định (!) trong điều kiện",
    "condition_count": "Tổng số biểu thức điều kiện cấp quyết định (if, else-if, ternary)",
    "simple_condition_count": "Số điều kiện đơn (không chứa && hoặc ||)",
    "compound_condition_count": "Số điều kiện ghép (chứa ít nhất một && hoặc ||)",
    "constant_count": "Tổng số hằng số literal (số hoặc ký tự) xuất hiện trong điều kiện",
    "unique_constant_count": "Số giá trị hằng số literal phân biệt trong điều kiện",
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
    """Khởi tạo một bản ghi đếm đặc trưng với tất cả giá trị bằng 0."""
    return {name: 0 for name in FEATURE_NAMES}