# CodeNet-C-Branching Student v1.0

## 1. Giới thiệu

**CodeNet-C-Branching Student v1.0** là bộ dữ liệu mã nguồn C được xây dựng từ **IBM Project CodeNet**, phục vụ cho đề tài:

**Xây dựng công cụ trích xuất đặc trưng cấu trúc điều kiện trong chương trình C.**

Bộ dữ liệu được tuyển chọn nhằm tập trung vào các chương trình có sử dụng cấu trúc điều kiện và rẽ nhánh, từ đó hỗ trợ việc xây dựng, kiểm thử và đánh giá công cụ trích xuất đặc trưng dựa trên cây cú pháp trừu tượng (AST).

---

## 2. Quy mô dữ liệu

Bộ dữ liệu gồm:

- **12 bài toán lập trình C**;
- **1.200 chương trình C**;
- **100 chương trình cho mỗi bài**;
- **600 chương trình Accepted**;
- **600 chương trình Wrong Answer**.

Mỗi bài gồm:

- 50 chương trình `Accepted`;
- 50 chương trình `Wrong Answer`.

---

## 3. Tiêu chí tuyển chọn

Các chương trình trong bộ dữ liệu được tuyển chọn sao cho có ít nhất một trong các cấu trúc điều kiện hoặc rẽ nhánh sau:

- `if`;
- `switch`;
- toán tử ba ngôi `?:`.

Toàn bộ **1.200 chương trình** đã được kiểm tra khả năng phân tích cú pháp bằng **Tree-sitter**.

Bộ dữ liệu được thiết kế nhằm tạo ra một corpus cân bằng giữa hai trạng thái `Accepted` và `Wrong Answer`, đồng thời bao phủ nhiều dạng bài toán có sử dụng cấu trúc điều kiện khác nhau.

---

## 4. Cấu trúc thư mục

```text
dataset/
├── DATASET_DESCRIPTION.md
├── metadata/
│   ├── problems.csv
│   └── submissions.csv
├── descriptions/
└── source/
```

### 4.1. `metadata/problems.csv`

Chứa thông tin về 12 bài toán.

Các trường dữ liệu:

- `problem_id`: mã định danh bài toán;
- `problem_name`: tên bài toán;
- `source_dataset`: nguồn dữ liệu gốc;
- `branching_type`: nhóm cấu trúc điều kiện chính của bài toán;
- `description_path`: đường dẫn đến tập tin mô tả bài toán.

### 4.2. `metadata/submissions.csv`

Chứa thông tin của 1.200 chương trình C.

Các trường dữ liệu:

- `submission_id`: mã định danh chương trình;
- `problem_id`: mã bài toán tương ứng;
- `status`: trạng thái `Accepted` hoặc `Wrong Answer`;
- `branching_type`: nhóm cấu trúc điều kiện chính;
- `source_path`: đường dẫn đến tập tin mã nguồn.

### 4.3. `descriptions/`

Chứa mô tả của từng bài toán.

### 4.4. `source/`

Chứa các tập tin mã nguồn C, được tổ chức theo `problem_id`.

Ví dụ:

```text
source/p02392/s217341346.c
```

---

## 5. Ý nghĩa của trường `status`

Trường `status` phản ánh kết quả chấm của chương trình trên hệ thống gốc:

- `Accepted`: chương trình vượt qua các test của hệ thống chấm;
- `Wrong Answer`: chương trình cho kết quả sai trên ít nhất một test.

**Lưu ý:** `Wrong Answer` không đồng nghĩa với một loại lỗi logic cụ thể.

Sinh viên không được suy luận rằng mọi chương trình `Wrong Answer` đều có cùng nguyên nhân lỗi hoặc cùng một mẫu lỗi logic.

Trong đề tài này, `status` được xem là **metadata tham khảo**, không phải đầu vào bắt buộc của bộ trích xuất đặc trưng.

---

## 6. Mục đích sử dụng

Bộ dữ liệu được sử dụng để:

- phát triển công cụ phân tích mã nguồn C;
- trích xuất đặc trưng cấu trúc điều kiện;
- kiểm tra khả năng xử lý mã nguồn thực tế;
- đánh giá độ ổn định của bộ trích xuất đặc trưng;
- thống kê và trực quan hóa các đặc trưng mã nguồn;
- tạo dữ liệu đầu ra phục vụ các nghiên cứu tiếp theo về cấu trúc chương trình và lỗi logic.

---

## 7. Phạm vi sử dụng

Bộ dữ liệu chỉ gồm các chương trình C đơn tập tin.

Đề tài hiện tại **không yêu cầu**:

- phát hiện tất cả các loại lỗi logic;
- tự động sửa mã nguồn;
- xây dựng mô hình học máy;
- sử dụng mô hình ngôn ngữ lớn (LLM);
- phát hiện sao chép mã nguồn;
- phân tích chương trình C nhiều tập tin.

---

## 8. Quy định sử dụng dữ liệu

Sinh viên cần tuân thủ các nguyên tắc sau:

1. Không chỉnh sửa mã nguồn trong thư mục `dataset/source`.
2. Không thay đổi `submission_id` hoặc `problem_id`.
3. Không tự ý xóa hoặc thêm chương trình vào corpus.
4. Không ghi đè kết quả phân tích lên dữ liệu gốc.
5. Các kết quả trích xuất phải được lưu trong thư mục đầu ra riêng.
6. Nếu phát hiện dữ liệu bất thường, cần báo với giảng viên hướng dẫn trước khi xử lý.
7. Không sử dụng trực tiếp metadata để thay thế nhiệm vụ trích xuất đặc trưng từ AST.
8. Không xem `Accepted` và `Wrong Answer` như hai loại lỗi hoặc hai lớp ngữ nghĩa tương đương với đúng/sai về cấu trúc điều kiện.

---

## 9. Kiểm tra tính toàn vẹn của corpus

Phiên bản Student v1.0 được kỳ vọng có các đặc điểm sau:

```text
Total submissions: 1200
Problems: 12
Accepted: 600
Wrong Answer: 600
Language: C
```

Toàn bộ chương trình đã được xác nhận có khả năng phân tích bằng Tree-sitter trong quá trình chuẩn bị corpus.

Sinh viên có thể sử dụng baseline parser đi kèm repository để kiểm tra lại khả năng parse trên môi trường của mình.

---

## 10. Phiên bản dữ liệu

- **Tên:** CodeNet-C-Branching Student
- **Phiên bản:** v1.0
- **Ngôn ngữ:** C
- **Số bài toán:** 12
- **Số chương trình:** 1.200
- **Mục đích:** Học tập, nghiên cứu và thực hiện đề tài trích xuất đặc trưng cấu trúc điều kiện.

Khi có thay đổi về thành phần corpus hoặc metadata, cần tạo phiên bản mới thay vì chỉnh sửa âm thầm phiên bản v1.0.

---

## 11. Nguồn dữ liệu và trích dẫn

Bộ dữ liệu được xây dựng từ **IBM Project CodeNet**.

Tài liệu tham khảo chính:

R. Puri *et al*., “Project CodeNet: A large-scale AI for code dataset for learning a diversity of coding tasks,” 2021.

DOI: **10.48550/arXiv.2105.12655**

Dataset DOI: **10.5281/zenodo.4814770**

Khi sử dụng corpus này trong báo cáo, sinh viên cần trích dẫn nguồn Project CodeNet theo hướng dẫn của giảng viên và danh mục tài liệu tham khảo chính thức của đề tài.

---

## 12. Ghi chú dành cho sinh viên

Bộ dữ liệu này chỉ là **dữ liệu đầu vào**.

Nhiệm vụ chính của đề tài là tự xây dựng công cụ có khả năng:

1. đọc mã nguồn C;
2. tạo hoặc nhận AST từ Tree-sitter;
3. nhận diện các cấu trúc điều kiện;
4. trích xuất các đặc trưng theo đặc tả được cung cấp;
5. xuất kết quả ra định dạng có cấu trúc;
6. kiểm thử và đánh giá độ chính xác của bộ trích xuất.

Không được sử dụng các kết quả tiền xử lý có sẵn để thay thế cho việc tự xây dựng bộ trích xuất đặc trưng.
