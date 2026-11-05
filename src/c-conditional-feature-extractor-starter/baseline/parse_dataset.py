import csv # Thư viện để đọc và ghi các file định dạng bảng (CSV)
import os  # Thư viện xử lý đường dẫn thư mục và file

import tree_sitter_c
from tree_sitter import Language, Parser

# Tự động xác định thư mục gốc của dự án (c-conditional-feature-extractor-starter)
BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# Định nghĩa đường dẫn đến file danh sách 1200 bài nộp (submissions.csv)
METADATA_FILE = os.path.join(BASE_DIR, "dataset", "metadata", "submissions.csv")

# Định nghĩa đường dẫn file xuất kết quả đầu ra (baseline_parse.csv)
OUTPUT_FILE = os.path.join(BASE_DIR, "output", "baseline_parse.csv")

# Khởi tạo parser cho C
C_LANGUAGE = Language(tree_sitter_c.language())
parser = Parser(C_LANGUAGE)

# Hàm duyệt cây đếm node giống hệt như trong parse_one.py
def count_nodes(node, node_type):
    count = 1 if node.type == node_type else 0
    for child in node.children:
        count += count_nodes(child, node_type)
    return count

# Khởi tạo một danh sách rỗng để lưu trữ kết quả của tất cả 1200 file
results = []

# Mở file metadata (danh sách bài nộp) để đọc
with open(METADATA_FILE, encoding="utf-8-sig") as f:
    reader = csv.DictReader(f) # Đọc file CSV dưới dạng một danh sách các từ điển (dictionary)

    # Lặp qua từng dòng (từng bài nộp) trong file CSV
    for index, row in enumerate(reader, start=1):
        
        # Tạo đường dẫn đầy đủ đến file C thực tế dựa trên cột 'source_path'
        source_path = os.path.join(BASE_DIR, "dataset", row["source_path"])

        # Tạo một bản ghi (dictionary) tạm để chứa thông tin kết quả của file C hiện tại
        result = {
            "submission_id": row["submission_id"], # Giữ lại ID bài nộp
            "problem_id": row["problem_id"],       # Giữ lại ID bài toán
            "status": row["status"],               # Trạng thái Accepted/Wrong Answer
            "parse_status": "failed",              # Mặc định là thất bại, nếu phân tích thành công sẽ sửa sau
            "has_error_node": "",
            "if_count": "",
            "switch_count": ""
        }

        try:
            # Thử mở file mã nguồn C
            with open(source_path, "rb") as source_file:
                source = source_file.read()

            # Sinh AST
            tree = parser.parse(source)
            root = tree.root_node

            # Cập nhật kết quả vào bản ghi
            result["parse_status"] = "ok" # Đánh dấu phân tích thành công
            result["has_error_node"] = root.has_error
            # Đếm và lưu if
            result["if_count"] = count_nodes(root, "if_statement")
            # Đếm và lưu switch
            result["switch_count"] = count_nodes(root, "switch_statement")

        except Exception as e:
            # Nếu có lỗi (file không tồn tại, lỗi đọc file...), in ra cảnh báo
            print("ERROR:", row["submission_id"], e)

        # Thêm bản ghi của file hiện tại vào danh sách tổng
        results.append(result)

        # Cứ sau mỗi 100 file thì in ra một thông báo tiến độ (cho người dùng khỏi sốt ruột)
        if index % 100 == 0:
            print(f"Processed {index}/1200")

# Định nghĩa các cột (tiêu đề) cho file CSV kết quả
fieldnames = [
    "submission_id", "problem_id", "status", 
    "parse_status", "has_error_node", "if_count", "switch_count"
]

# Mở file kết quả (OUTPUT_FILE) để Ghi ("w" - write)
with open(OUTPUT_FILE, "w", newline="", encoding="utf-8-sig") as f:
    # Sử dụng DictWriter để ghi danh sách các dictionary vào file CSV
    writer = csv.DictWriter(f, fieldnames=fieldnames)
    
    writer.writeheader() # Viết dòng tiêu đề các cột
    writer.writerows(results) # Ghi tất cả dữ liệu kết quả phân tích vào các dòng tiếp theo

# In thông báo hoàn tất
print()
print("Output:", OUTPUT_FILE)