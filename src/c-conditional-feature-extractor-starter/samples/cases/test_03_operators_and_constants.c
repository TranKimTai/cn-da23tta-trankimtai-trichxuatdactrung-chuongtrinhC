// Test 03: Kiểm tra đủ 6 toán tử so sánh, 3 toán tử logic, điều kiện đơn/ghép và hằng số (Rules R05, R06, R09)
// Kỳ vọng:
// - if_count = 3, condition_count = 3, simple_condition_count = 1, compound_condition_count = 2
// - lt(<)=1, le(<=)=1, gt(>)=1, ge(>=)=1, eq(==)=1, ne(!=)=1
// - and(&&)=2, or(||)=1, not(!)=2 (lưu ý: if (!flag) vẫn là simple condition theo Rule R06)
// - constant_count = 6 (10, 20, 0, 10, 'A', 100), unique_constant_count = 5 (số 10 lặp lại 2 lần)
#include <stdio.h>

int main() {
    int x = 15, y = 10, flag = 0;
    char ch = 'A';

    // Condition 1 (Ghép): chứa >=, <=, &&, != và hằng số 10, 20, 0
    if (x >= 10 && x <= 20 && y != 0) {
        x = x + 1;
    }

    // Condition 2 (Ghép): chứa ==, <, ||, ! và hằng số 'A', 100, 10
    if (ch == 'A' || !(x < 100 && y > 10)) {
        y = y - 1;
    }

    // Condition 3 (Đơn): chỉ chứa toán tử phủ định !, KHÔNG có && hay || (Rule R06)
    if (!flag) {
        flag = 1;
    }

    return 0;
}
