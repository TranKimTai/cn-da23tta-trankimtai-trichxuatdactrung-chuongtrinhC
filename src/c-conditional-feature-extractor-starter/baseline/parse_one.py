import sys # Thư viện hệ thống để lấy đối số (đường dẫn file) từ lệnh gõ trên terminal

import tree_sitter_c # Tải bộ ngữ pháp của ngôn ngữ C
from tree_sitter import Language, Parser # Tải các class cốt lõi của Tree-sitter

# Khởi tạo đối tượng ngôn ngữ C và nạp nó vào trình phân tích (Parser)
C_LANGUAGE = Language(tree_sitter_c.language())
parser = Parser(C_LANGUAGE)

# Hàm đệ quy dùng để duyệt cây AST và đếm số lượng một loại node (nút) cụ thể
def count_nodes(node, node_type):
    # Nếu node hiện tại khớp với loại node cần tìm (ví dụ: 'if_statement') thì biến đếm = 1, ngược lại = 0
    count = 1 if node.type == node_type else 0

    # Lặp qua tất cả các node con của node hiện tại
    for child in node.children:
        # Gọi lại chính hàm này (đệ quy) để đếm tiếp trong các node con, rồi cộng dồn vào tổng
        count += count_nodes(child, node_type)

    return count

# Kiểm tra xem người dùng có truyền đúng 1 đường dẫn file vào lệnh chạy hay không
if len(sys.argv) != 2:
    print("Usage:")
    print("python parse_one.py <source.c>")
    sys.exit(1) # Thoát chương trình nếu gõ sai lệnh

# Lấy đường dẫn file từ đối số dòng lệnh (ví dụ: samples/cases/01_simple_if.c)
source_path = sys.argv[1]

# Mở file C dưới dạng đọc nhị phân ("rb" - read bytes)
with open(source_path, "rb") as f:
    source = f.read() # Đọc toàn bộ nội dung file

# Đưa nội dung file vào parser để sinh ra cây cú pháp (AST)
tree = parser.parse(source)
root = tree.root_node # Lấy node gốc cao nhất của cây (thường là translation_unit)

# In kết quả ra màn hình
print("File:", source_path)
print("Root node:", root.type) 
print("Has error:", root.has_error) # Báo True nếu mã nguồn C bị lỗi cú pháp trầm trọng

# Gọi hàm đếm node để đếm số lượng 'if_statement' và in ra
print(
    "If statements:",
    count_nodes(root, "if_statement")
)

# Gọi hàm đếm node để đếm số lượng 'switch_statement' và in ra
print(
    "Switch statements:",
    count_nodes(root, "switch_statement")
)