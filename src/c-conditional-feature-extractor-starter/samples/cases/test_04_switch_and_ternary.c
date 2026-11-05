// Test 04: Kiểm tra cấu trúc switch-case-default và toán tử ba ngôi ?: (Rules R10, R11)
// Kỳ vọng:
// - switch_count = 1, case_count = 3, default_count = 1 (switch không cộng vào condition_count)
// - ternary_count = 2, condition_count = 2, max_nesting_depth = 2
// - gt_count = 1, lt_count = 1, constant_count = 2 (0, 0), unique_constant_count = 1
#include <stdio.h>

int main() {
    int day = 2;
    int x = -5;

    switch (day) {
        case 1:
        case 2:
            x = (x > 0) ? 100 : 200; // Ternary nằm trong switch -> Depth = 2
            break;
        case 3:
            x = 300;
            break;
        default:
            x = 0;
            break;
    }

    // Ternary độc lập ở ngoài -> Depth = 1
    int abs_x = (x < 0) ? -x : x;

    return 0;
}
