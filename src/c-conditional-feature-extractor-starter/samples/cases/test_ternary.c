#include <stdio.h>

void main() {
    int a = 10, b = 20, c = 30;
    
    // Câu lệnh 1: Toán tử 3 ngôi cơ bản (Tăng ternary_count lên 1)
    int max1 = (a > b) ? a : b;
    
    // Câu lệnh 2: Toán tử 3 ngôi lồng nhau (Tăng ternary_count lên 2)
    int max_all = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}