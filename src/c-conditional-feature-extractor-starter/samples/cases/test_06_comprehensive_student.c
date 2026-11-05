// Test 06: Bài toán tổng hợp mô phỏng bài nộp CodeNet (Kết hợp chuỗi else-if + if lồng + ternary)
// Kỳ vọng:
// - if_count = 5, else_if_count = 2, if_else_count = 2, switch_count = 0, ternary_count = 1
// - max_nesting_depth = 2 (nhánh else-if thứ 2 chứa 1 lệnh if lồng bên trong -> depth = 2)
// - condition_count = 6 (5 if + 1 ternary), simple_condition_count = 4, compound_condition_count = 2
#include <stdio.h>

int main() {
    int a = 5, b = 8, c = 12;
    int type = 0;

    if (a <= 0 || b <= 0 || c <= 0) {               // Depth = 1 (else-if chain root, compound)
        type = -1;
    } else if (a == b && b == c) {                  // Depth = 1 (else-if #1, compound)
        type = 1;
    } else if (a < b + c) {                         // Depth = 1 (else-if #2, simple)
        if (a == b) {                               // Depth = 2 (nested if inside else-if #2)
            type = 2;
        } else {
            type = 3;
        }
    } else {
        type = 0;
    }

    // Câu lệnh if độc lập nối tiếp (Depth = 1) có chứa ternary bên trong (Depth = 2)
    if (type != -1) {                               // Depth = 1
        int bonus = (type > 1) ? 10 : 5;            // Depth = 2 (ternary inside if)
    }

    return 0;
}
