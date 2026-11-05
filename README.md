<<<<<<< HEAD
# C Conditional Feature Extractor Starter

Repository khởi đầu dành cho sinh viên thực hiện đề tài:

**Xây dựng công cụ trích xuất đặc trưng cấu trúc điều kiện trong chương trình C**

Repository cung cấp bộ dữ liệu, parser baseline, tài liệu hướng dẫn và cấu trúc dự án ban đầu. Sinh viên phải tự xây dựng bộ trích xuất đặc trưng, bộ kiểm thử, phần thống kê và giao diện theo yêu cầu của đề tài.

---

## 1. Mục tiêu

Sinh viên xây dựng một công cụ phân tích tĩnh mã nguồn C dựa trên cây cú pháp trừu tượng (AST), sử dụng Tree-sitter để:

- nhận diện các cấu trúc điều kiện và rẽ nhánh;
- trích xuất các đặc trưng cấu trúc và biểu thức;
- xuất dữ liệu dạng CSV và JSONL;
- kiểm thử độ chính xác của bộ trích xuất;
- chạy thực nghiệm trên bộ CodeNet-C-Branching;
- thống kê và trực quan hóa kết quả.

Repository này chỉ cung cấp **dữ liệu đầu vào, parser baseline và đặc tả yêu cầu**. Phần trích xuất đặc trưng chính là nội dung sinh viên phải tự phát triển.

---

## 2. Cấu trúc repository

```text
c-conditional-feature-extractor-starter/
├── app/
├── baseline/
│   ├── parse_dataset.py
│   ├── parse_one.py
│   ├── README.md
│   └── requirements.txt
├── dataset/
│   ├── DATASET_DESCRIPTION.md
│   ├── descriptions/
│   ├── metadata/
│   │   ├── problems.csv
│   │   └── submissions.csv
│   └── source/
├── docs/
├── output/
├── samples/
├── scripts/
│   └── verify_dataset.py
├── specification/
│   └── Feature_Specification.xlsx
├── src/
├── tests/
├── requirements.txt
└── README.md
```

### Ý nghĩa các thư mục

- `baseline/`: parser mẫu sử dụng Tree-sitter.
- `dataset/`: bộ dữ liệu CodeNet-C-Branching Student v1.0.
- `docs/`: tài liệu hướng dẫn đề tài.
- `specification/`: đặc tả chính thức của các feature và định dạng dữ liệu đầu ra.
- `samples/`: các chương trình C mẫu và kết quả minh họa.
- `src/`: nơi sinh viên phát triển mã nguồn chính của bộ trích xuất.
- `tests/`: nơi xây dựng bộ kiểm thử.
- `app/`: mã nguồn giao diện Streamlit.
- `output/`: nơi lưu kết quả trích xuất và thống kê.
- `scripts/`: các công cụ hỗ trợ kiểm tra và xác minh dữ liệu.
- `requirements.txt`: danh sách thư viện Python dùng cho toàn bộ project starter.
---

## 3. Bộ dữ liệu

Bộ dữ liệu sử dụng trong đề tài là **CodeNet-C-Branching Student v1.0**.

Thông tin chính:

- 12 bài toán;
- 1.200 chương trình C;
- 600 chương trình `Accepted`;
- 600 chương trình `Wrong Answer`;
- 100 chương trình cho mỗi bài;
- toàn bộ chương trình đã được kiểm tra khả năng parse bằng Tree-sitter trong quá trình chuẩn bị corpus.

Xem mô tả chi tiết tại:

```text
dataset/DATASET_DESCRIPTION.md
```

### Metadata

`dataset/metadata/problems.csv` gồm:

```text
problem_id
problem_name
source_dataset
branching_type
description_path
```

`dataset/metadata/submissions.csv` gồm:

```text
submission_id
problem_id
status
branching_type
source_path
```

Lưu ý: `status` chỉ là metadata tham khảo. `Wrong Answer` không đồng nghĩa với một loại lỗi logic cụ thể.

---

## 4. Feature Specification

Repository cung cấp tài liệu đặc tả chính thức tại:

```text
specification/Feature_Specification.xlsx
```

Tài liệu này quy định:

- danh sách feature bắt buộc;
- tên và nhóm của từng feature;
- kiểu dữ liệu;
- định nghĩa chính thức;
- phạm vi tính toán;
- quy tắc xử lý các trường hợp đặc biệt;
- schema của `features.csv`;
- schema của `conditions.jsonl`.

`Feature_Specification.xlsx` là một phần của yêu cầu đề tài và phải được tuân thủ khi xây dựng bộ trích xuất.

Tài liệu này chỉ mô tả **kết quả cần đạt (WHAT)**, không cung cấp sẵn thuật toán hoặc mã nguồn để tính feature.

Sinh viên phải tự:

- nghiên cứu AST do Tree-sitter tạo ra;
- xác định node và quan hệ giữa các node;
- thiết kế cách duyệt cây;
- xây dựng thuật toán trích xuất;
- hiện thực mã nguồn;
- xây dựng kiểm thử để chứng minh kết quả phù hợp với specification.

Nếu cách hiểu cá nhân khác với định nghĩa trong `Feature_Specification.xlsx`, sinh viên phải ưu tiên đặc tả chính thức hoặc trao đổi với giảng viên hướng dẫn trước khi thay đổi cách tính.

Không được chỉnh sửa `Feature_Specification.xlsx` để làm cho kết quả hiện thực phù hợp với chương trình của mình.

---

## 5. Yêu cầu môi trường

Môi trường đề nghị:

- Windows 10/11;
- Python 3.12;
- Tree-sitter;
- `tree-sitter-c`;
- Pandas;
- Streamlit;
- Git/GitHub.

Baseline hiện được kiểm thử với:

```text
tree-sitter==0.26.0
tree-sitter-c==0.24.2
```

---

## 6. Cài đặt môi trường baseline

Mở **Command Prompt (CMD)** tại thư mục repository.

Kiểm tra Python:

```cmd
python --version
```

Nếu máy có nhiều bản Python và lệnh `python` không trỏ đến Python 3.12, cần xác định đúng đường dẫn Python trước khi cài thư viện.

Cài các thư viện của baseline:

```cmd
python -m pip install -r baseline\requirements.txt
```

Kiểm tra các package đã cài:

```cmd
python -m pip show tree-sitter
python -m pip show tree-sitter-c
```

---

## 7. Chạy parser baseline

### 7.1. Phân tích một chương trình C

Xem hướng dẫn chi tiết trong:

```text
baseline/README.md
```

Có thể chạy `parse_one.py` với một tập tin C mẫu theo cú pháp được mô tả trong baseline README.

Baseline chỉ minh họa:

- parse mã nguồn C;
- xác định node gốc;
- kiểm tra node lỗi;
- đếm một số cấu trúc cơ bản.

Baseline **không phải** là bộ trích xuất đặc trưng hoàn chỉnh.

### 7.2. Phân tích toàn bộ corpus

Sử dụng:

```cmd
python baseline\parse_dataset.py
```

Tùy phiên bản baseline được cung cấp, kết quả kiểm tra parser có thể được ghi ra một tập tin CSV.

Sinh viên cần đọc mã nguồn baseline để hiểu cách Tree-sitter được khởi tạo và cách duyệt AST.

---

## 8. Quy trình thực hiện đề tài

Quy trình đề nghị:

```text
Đọc tài liệu hướng dẫn
        ↓
Khảo sát dataset
        ↓
Chạy parser baseline
        ↓
Nghiên cứu AST của các cấu trúc điều kiện
        ↓
Đọc Feature Specification
        ↓
Thiết kế bộ trích xuất
        ↓
Xây dựng test
        ↓
Kiểm tra Expected vs Actual
        ↓
Chạy toàn bộ 1.200 chương trình
        ↓
Xuất features.csv và conditions.jsonl
        ↓
Thống kê và trực quan hóa
        ↓
Hoàn thiện Streamlit
        ↓
Báo cáo và demo
```

Sinh viên không nên bắt đầu viết toàn bộ extractor trước khi hiểu rõ định nghĩa của từng feature.

---

## 9. Sản phẩm cần xây dựng

Tối thiểu phải có:

1. bộ trích xuất đặc trưng mã nguồn C;
2. mã nguồn tổ chức theo mô-đun;
3. `features.csv`;
4. `conditions.jsonl`;
5. bộ kiểm thử khoảng 30–50 chương trình C;
6. expected results cho bộ test;
7. báo cáo so sánh Expected – Actual;
8. kết quả chạy trên 1.200 chương trình;
9. thống kê và biểu đồ;
10. giao diện Streamlit;
11. `requirements.txt`;
12. README của sản phẩm hoàn chỉnh;
13. báo cáo đồ án;
14. slide và bản demo.

---

## 10. Quy định đối với dữ liệu gốc

Sinh viên không được:

- chỉnh sửa tập tin trong `dataset/source`;
- đổi `submission_id`;
- đổi `problem_id`;
- xóa hoặc thêm submission vào corpus;
- ghi đè kết quả lên dataset;
- sử dụng metadata như một cách thay thế cho việc tự trích xuất feature;
- thay thế hoàn toàn phân tích AST bằng biểu thức chính quy (regex).

Kết quả sinh ra phải được lưu tại:

```text
output/
```

hoặc một thư mục đầu ra riêng do sinh viên tạo.

Nếu phát hiện dữ liệu bất thường, cần báo giảng viên hướng dẫn trước khi chỉnh sửa.

---

## 11. Nguyên tắc phát triển

Phần xử lý cốt lõi nên được thiết kế sao cho không phụ thuộc riêng vào CodeNet.

Ví dụ, bộ trích xuất nên có khả năng nhận:

```python
extract_features(source_code)
```

hoặc:

```python
extract_features(source_path)
```

Metadata của CodeNet chỉ được dùng ở tầng xử lý corpus.

Không nên đặt toàn bộ mã nguồn vào một tập tin duy nhất. Khuyến nghị tách các chức năng:

```text
src/
├── parser.py
├── extractor.py
├── models.py
├── exporter.py
├── cli.py
└── utils.py
```

Tên tập tin có thể thay đổi nếu sinh viên có thiết kế hợp lý hơn.

---

## 12. Kiểm thử

Sinh viên phải tự xây dựng bộ kiểm thử khoảng 30–50 chương trình C nhỏ.

Các nhóm test tối thiểu:

- `if`;
- `if-else`;
- `else-if`;
- nested `if`;
- nhiều `if` độc lập;
- `switch-case`;
- toán tử `?:`;
- `<`, `<=`, `>`, `>=`, `==`, `!=`;
- `&&`, `||`, `!`;
- điều kiện đơn;
- điều kiện ghép;
- hằng số/ngưỡng;
- nhiều mức lồng nhau.

Mỗi test phải có expected result để có thể so sánh tự động với actual result.

---

## 13. Tài liệu cần đọc

Sinh viên cần đọc theo thứ tự:

1. Phiếu hướng dẫn đề tài trong `docs/`.
2. `dataset/DATASET_DESCRIPTION.md`.
3. `baseline/README.md`.
4. `specification/Feature_Specification.xlsx`.
5. Danh mục tài liệu tham khảo do giảng viên cung cấp.

Không nên chỉ dựa vào mã nguồn baseline mà bỏ qua tài liệu đặc tả.

---

## 14. Quản lý mã nguồn

Sinh viên sử dụng Git/GitHub để quản lý mã nguồn.

Khuyến nghị commit theo từng chức năng hoặc mốc công việc, ví dụ:

```text
feat: add C parser wrapper
feat: extract comparison operators
test: add nested-if cases
fix: correct else-if detection
docs: update feature specification notes
```

Không commit:

- môi trường ảo Python;
- file tạm;
- cache;
- output thử nghiệm dung lượng lớn không cần thiết.

---

## 15. Mốc thực hiện

Đề tài được quản lý theo 4 mốc chính, tương ứng khoảng 8 tuần thực tế.

### Mốc 1

- hiểu dataset và AST;
- chạy baseline;
- đọc và hiểu Feature Specification;
- có prototype ban đầu.

### Mốc 2

- hoàn thiện extractor phiên bản 1;
- xuất thử CSV/JSONL;
- hoàn thành phần chính của thiết kế hệ thống.

### Mốc 3

- hoàn thiện bộ test;
- đánh giá Expected – Actual;
- chạy toàn bộ corpus;
- có số liệu thực nghiệm.

### Mốc 4

- hoàn thiện Streamlit;
- kiểm thử cuối;
- hoàn thiện báo cáo;
- README;
- slide;
- demo.

Chi tiết tiến độ được trình bày trong phiếu hướng dẫn đề tài.

---

## 16. Nguồn dữ liệu

Corpus được xây dựng từ **IBM Project CodeNet**.

Tài liệu tham khảo:

R. Puri *et al*., “Project CodeNet: A large-scale AI for code dataset for learning a diversity of coding tasks,” 2021.

DOI:

```text
10.48550/arXiv.2105.12655
```

Dataset DOI:

```text
10.5281/zenodo.4814770
```

Sinh viên phải trích dẫn nguồn dữ liệu khi sử dụng corpus trong báo cáo.

---

## 17. Lưu ý

Repository này là **starter repository**.

Nó không cung cấp lời giải hoàn chỉnh cho đề tài.

Giảng viên cung cấp:

- dữ liệu đầu vào;
- parser baseline;
- tài liệu hướng dẫn;
- Feature Specification;
- một số ví dụ/test mẫu phục vụ khởi động.

Các phần sau là nhiệm vụ của sinh viên:

- thiết kế và hiện thực extractor;
- xây dựng phần lớn bộ test;
- xác định expected results cho các test tự xây dựng;
- kiểm chứng độ chính xác;
- xử lý corpus;
- thống kê;
- trực quan hóa;
- xây dựng giao diện;
- viết báo cáo và thảo luận kết quả.
=======
# cn-da23tta-trankimtai-trichxuatdactrung-chuongtrinhC
>>>>>>> 8b3bde3afd89c7dd82e67b56b1d0d943a81cbbed
