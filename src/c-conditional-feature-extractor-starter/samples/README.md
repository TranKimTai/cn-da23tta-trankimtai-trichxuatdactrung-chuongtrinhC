# Sample Tests

Thư mục này cung cấp **7 chương trình C mẫu** và một tập tin `expected_sample.json`.

Mục đích của bộ mẫu là giúp sinh viên:

- hiểu cách chuyển định nghĩa trong `Feature_Specification.xlsx` thành kết quả mong đợi;
- kiểm tra bước đầu khi xây dựng extractor;
- làm mẫu cho cách xây dựng bộ kiểm thử Expected–Actual.

## Các trường hợp mẫu

1. `01_simple_if.c` – `if` đơn và toán tử `<`.
2. `02_if_else.c` – `if-else` và toán tử `>=`.
3. `03_else_if_chain.c` – chuỗi `else-if`.
4. `04_nested_if.c` – `if` lồng nhau và nesting depth.
5. `05_compound_condition.c` – `&&`, `||`, `!` và điều kiện ghép.
6. `06_switch_case.c` – `switch`, `case`, `default`.
7. `07_ternary.c` – toán tử ba ngôi `?:`.

## Nguyên tắc sử dụng

- Giá trị trong `expected_sample.json` phải được hiểu theo `specification/Feature_Specification.xlsx`.
- Bộ mẫu này **không thay thế** bộ kiểm thử chính thức mà sinh viên phải tự xây dựng.
- Sinh viên cần bổ sung khoảng 30–50 test, bao gồm các trường hợp biên và tổ hợp cấu trúc.
- Không sửa expected values chỉ để làm cho extractor hiện tại vượt qua test. Nếu nghi ngờ specification hoặc expected value có vấn đề, cần trao đổi với giảng viên hướng dẫn.

## Lưu ý

Các hằng số ở biểu thức ngoài condition không được tính vào `constant_count`.
Biểu thức điều khiển của `switch` không được tính vào `condition_count` theo specification hiện tại.
Chuỗi `else-if` không làm tăng `max_nesting_depth`.
