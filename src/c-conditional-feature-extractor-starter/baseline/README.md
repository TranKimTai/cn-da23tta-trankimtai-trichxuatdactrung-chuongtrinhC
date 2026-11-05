# Parser Baseline

Baseline này cung cấp môi trường khởi đầu để phân tích các chương trình C trong bộ dữ liệu **CodeNet-C-Branching Student v1.0** bằng **Tree-sitter**.

## 1. Mục đích

Baseline giúp kiểm tra khả năng phân tích cú pháp mã nguồn C và minh họa cách sử dụng Tree-sitter để truy cập một số thông tin cơ bản của cây cú pháp.

Baseline **không phải** là lời giải hoàn chỉnh cho đề tài. Sinh viên phải tự nghiên cứu và phát triển bộ trích xuất đặc trưng theo yêu cầu trong:

```text
specification/Feature_Specification.xlsx
```

## 2. Yêu cầu môi trường

- Python 3.12
- tree-sitter 0.26.0
- tree-sitter-c 0.24.2

Khuyến nghị sử dụng môi trường ảo Python của repository.

Từ thư mục gốc của repository:

```cmd
python -m venv .venv
.venv\Scripts\activate.bat
```

Cài các thư viện:

```cmd
python -m pip install -r requirements.txt
```

Hoặc chỉ cài các thư viện tối thiểu của baseline:

```cmd
python -m pip install -r baseline\requirements.txt
```

## 3. Phân tích một chương trình C

Cú pháp:

```cmd
python baseline\parse_one.py <đường_dẫn_tập_tin_C>
```

Ví dụ:

```cmd
python baseline\parse_one.py dataset\source\p02392\s203704127.c
```

Kết quả cơ bản gồm:
- loại node gốc của cây cú pháp;
- trạng thái có lỗi cú pháp hay không;
- số lượng `if_statement`;
- số lượng `switch_statement`.

Ví dụ:

```text
Root node: translation_unit
Has error: False
If statements: 1
Switch statements: 0
```

## 4. Phân tích toàn bộ corpus

Từ thư mục gốc của repository, chạy:

```cmd
python baseline\parse_dataset.py
```

Chương trình đọc metadata tại:

```text
dataset/metadata/submissions.csv
```

và phân tích các chương trình C nằm trong:

```text
dataset/source/
```

Corpus hiện gồm:

```text
12 bài toán
1.200 chương trình C
600 Accepted
600 Wrong Answer
100 chương trình/bài
```

Kết quả baseline được lưu tại:

```text
output/baseline_parse.csv
```

Tập tin kết quả gồm các trường:

```text
submission_id
problem_id
status
parse_status
has_error_node
if_count
switch_count
```

## 5. Cấu trúc dữ liệu liên quan

```text
c-conditional-feature-extractor-starter/
├── baseline/
│   ├── parse_one.py
│   ├── parse_dataset.py
│   ├── requirements.txt
│   └── README.md
├── dataset/
│   ├── DATASET_DESCRIPTION.md
│   ├── descriptions/
│   ├── metadata/
│   │   ├── problems.csv
│   │   └── submissions.csv
│   └── source/
├── output/
└── specification/
    └── Feature_Specification.xlsx
```

Trong đó:
- `dataset/metadata/problems.csv`: thông tin về 12 bài toán;
- `dataset/metadata/submissions.csv`: metadata của 1.200 chương trình C;
- `dataset/descriptions/`: mô tả các bài toán;
- `dataset/source/`: mã nguồn C;
- `baseline/`: parser mẫu sử dụng Tree-sitter;
- `output/`: nơi lưu kết quả sinh ra;
- `specification/Feature_Specification.xlsx`: đặc tả chính thức của các feature mà sinh viên phải hiện thực.

## 6. Phạm vi của baseline

Baseline hiện chỉ cung cấp:
- phân tích cú pháp C bằng Tree-sitter;
- kiểm tra `ERROR node`;
- đếm số `if_statement`;
- đếm số `switch_statement`.

Baseline **không cung cấp sẵn**:
- số lượng `else-if`;
- số lượng `if-else`;
- độ sâu lồng nhau;
- phân tích toán tử so sánh;
- phân tích `&&`, `||`, `!`;
- phân tích điều kiện đơn và điều kiện ghép;
- trích xuất hằng số/ngưỡng;
- phân tích đầy đủ toán tử `?:`;
- bộ trích xuất theo `Feature_Specification.xlsx`;
- phát hiện lỗi logic;
- sửa mã nguồn tự động.

## 7. Lưu ý khi sử dụng dữ liệu

Hai trường sau phải luôn được giữ nguyên khi sinh kết quả:

```text
submission_id
problem_id
```

Trường `status` chỉ phản ánh kết quả chấm của hệ thống (`Accepted` hoặc `Wrong Answer`). `Wrong Answer` **không đồng nghĩa với một loại lỗi logic cụ thể**.

## 8. Quy định đối với dữ liệu gốc

Không chỉnh sửa trực tiếp các tập tin trong:

```text
dataset/source/
```

Không ghi kết quả phân tích vào thư mục `dataset/`.

Các kết quả sinh ra phải được lưu tại:

```text
output/
```

hoặc một thư mục đầu ra riêng của chương trình.

## 9. Nguồn dữ liệu

**CodeNet-C-Branching Student v1.0** được xây dựng từ **IBM Project CodeNet** và được tuyển chọn cho các bài toán C có liên quan đến cấu trúc điều kiện và rẽ nhánh.

Thông tin chi tiết về corpus xem tại:

```text
dataset/DATASET_DESCRIPTION.md
```

Corpus hiện gồm 12 bài toán, 1.200 chương trình C, 600 `Accepted`, 600 `Wrong Answer`, 100 chương trình/bài.

## 10. Vai trò của baseline trong đề tài

Baseline chỉ nhằm giúp sinh viên:
1. kiểm tra môi trường Tree-sitter;
2. hiểu cách parse mã nguồn C;
3. quan sát AST;
4. làm quen với cách duyệt node;
5. có điểm khởi đầu để tự thiết kế bộ trích xuất.

Sinh viên phải đọc và tuân thủ:

```text
specification/Feature_Specification.xlsx
```

để xây dựng bộ trích xuất chính thức của đề tài.

Không nên mở rộng trực tiếp `parse_dataset.py` thành toàn bộ hệ thống nếu điều đó làm mã nguồn khó tổ chức. Phần xử lý chính nên được thiết kế theo mô-đun trong thư mục:

```text
src/
```
