// Test 01: Kiểm tra chuỗi bậc thang else-if (Rules R01, R02, R03)
// Kỳ vọng: if_count = 4, else_if_count = 3, if_else_count = 1, max_nesting_depth = 1
// Toán tử: ge_count = 4, condition_count = 4, simple_condition_count = 4, constant_count = 4, unique_constant_count = 4
#include <stdio.h>

int main() {
    int score = 75;
    char grade;

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 65) {
        grade = 'C';
    } else if (score >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    return 0;
}
