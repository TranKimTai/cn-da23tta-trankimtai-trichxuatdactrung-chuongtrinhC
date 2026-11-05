# Nạp thư viện tree_sitter cốt lõi để phân tích cú pháp
import tree_sitter
# Nạp bộ ngữ pháp dành riêng cho ngôn ngữ C
import tree_sitter_c
# Nạp thư viện sys để nhận đường dẫn file từ cửa sổ dòng lệnh (terminal)
import sys

# Khởi tạo một đối tượng Parser (Trình phân tích)
parser = tree_sitter.Parser()
# Thiết lập ngôn ngữ cho trình phân tích là ngôn ngữ C
parser.language = tree_sitter.Language(tree_sitter_c.language())

# Định nghĩa hàm đệ quy để duyệt cây AST và đếm các cấu trúc if
def extract_if_features(node):
    # Tạo một từ điển (dictionary) để lưu trữ kết quả đếm của 3 đặc trưng
    features = {
        'if_count': 0,
        'if_else_count': 0,
        'else_if_count': 0
    }
    
    # KIỂM TRA NODE HIỆN TẠI
    # Nếu loại (type) của node đang xét là một câu lệnh rẽ nhánh 'if'
    if node.type == 'if_statement':
        # Tăng tổng số lượng câu lệnh if lên 1 (Tính năng: if_count)
        features['if_count'] += 1
        
        # Lấy node con nằm ở nhánh 'else' của lệnh if hiện tại (được định danh là 'alternative')
        alternative_node = node.child_by_field_name('alternative')
        
        # Nếu nhánh 'else' thực sự tồn tại (không bị bỏ trống)
        if alternative_node:
            # Kiểm tra xem ngay sau chữ 'else' đó có phải là một lệnh 'if' khác hay không
            if alternative_node.type == 'if_statement':
                # Nếu đúng, đây chính là cấu trúc 'else if'. Tăng else_if_count lên 1.
                features['else_if_count'] += 1
            else:
                # Nếu sau 'else' là một khối lệnh {} bình thường. Tăng if_else_count lên 1.
                features['if_else_count'] += 1

    # DUYỆT CÁC NODE CON (ĐỆ QUY)
    # Lặp qua tất cả các node con nằm bên dưới node hiện tại
    for child in node.children:
        # Gọi lại chính hàm này để đếm các đặc trưng bên trong node con đó
        child_features = extract_if_features(child)
        
        # Cộng dồn kết quả đếm được từ node con vào tổng kết quả của node hiện tại
        features['if_count'] += child_features['if_count']
        features['if_else_count'] += child_features['if_else_count']
        features['else_if_count'] += child_features['else_if_count']
        
    # Trả về từ điển chứa tổng kết quả đếm được
    return features

# Hàm main dùng để điều khiển luồng thực thi chính của chương trình
def main():
    # Kiểm tra xem người dùng đã truyền đường dẫn file C vào terminal chưa
    if len(sys.argv) < 2:
        print("Cú pháp đúng: python test_extractor.py <duong_dan_file_c>")
        return

    # Lấy đường dẫn file C từ đối số dòng lệnh
    file_path = sys.argv[1]
    
    # Mở và đọc toàn bộ nội dung của file C dưới dạng văn bản (text)
    with open(file_path, 'r', encoding='utf-8') as f:
        source_code = f.read()

    # Yêu cầu Parser phân tích đoạn mã (phải chuyển text sang kiểu bytes utf8) để sinh ra cây AST
    tree = parser.parse(bytes(source_code, "utf8"))
    
    # Gọi hàm trích xuất, truyền vào nút gốc (root_node) cao nhất của cây AST
    results = extract_if_features(tree.root_node)
    
    # In kết quả trực quan ra màn hình terminal
    print(f"Kết quả phân tích file: {file_path}")
    print(f" - Tổng số lệnh if (if_count): {results['if_count']}")
    print(f" - Số lệnh có else (if_else_count): {results['if_else_count']}")
    print(f" - Số lệnh else-if (else_if_count): {results['else_if_count']}")

# Lệnh này đảm bảo hàm main() chỉ chạy khi file này được gọi trực tiếp từ terminal
if __name__ == "__main__":
    main()