// Test 02: Kiểm tra cấu trúc if lồng nhau thực sự & if trong khối else { ... } (Rule R04)
// Kỳ vọng: if_count = 4, else_if_count = 0, if_else_count = 2, max_nesting_depth = 3
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int res = 0;

    if (a > 0) {                // Depth = 1
        if (b > 10) {           // Depth = 2
            if (c == 30) {      // Depth = 3
                res = 1;
            }
        } else {
            res = 2;
        }
    } else {
        // if nằm trong cặp ngoặc nhọn { } của else là if lồng (Depth = 2), KHÔNG phải else-if
        if (b != 0) {           // Depth = 2
            res = 3;
        }
    }

    return 0;
}
