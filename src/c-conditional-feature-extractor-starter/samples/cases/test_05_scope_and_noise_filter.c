// Test 05: Kiểm tra lọc nhiễu ngoài condition (Rules R07, R08)
// Các toán tử <, >, ==, &&, ! nằm ở phép gán, vòng lặp for/while, printf hoặc comment
// TUYỆT ĐỐI KHÔNG được đếm vào đặc trưng biểu thức điều kiện.
// Kỳ vọng:
// - if_count = 1, condition_count = 1, simple_condition_count = 1, compound_condition_count = 0
// - eq_count = 1, các toán tử khác = 0, constant_count = 1 (42), unique_constant_count = 1
#include <stdio.h>

int main() {
    // Nhiễu trong comment: if (a < 10 && b > 20 || c != 30) {}
    printf("if (x <= 100 && y >= 50) { return 1; }\n");

    int a = 5, b = 10;
    int cmp_outside = (a < b) && (b > 0) || !(a == 999);

    for (int i = 0; i < 10; i++) {
        while (b > 100) {
            b--;
        }
    }

    // Chỉ duy nhất điều kiện if dưới đây được phép trích xuất:
    if (a == 42) {
        return 1;
    }

    return 0;
}
