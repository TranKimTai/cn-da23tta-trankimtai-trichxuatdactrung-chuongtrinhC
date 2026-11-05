#include <stdio.h>

int main(void) {
    int a = 1, b = 5, c = 2;

    if (a > 0) {
        if (b <= 10) {
            if (c != 3) {
                return 1;
            }
        }
    }

    return 0;
}
