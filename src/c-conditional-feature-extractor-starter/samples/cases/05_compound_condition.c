#include <stdio.h>

int main(void) {
    int x = 15;
    int y = 3;
    int flag = 0;

    if (x >= 10 && (x <= 20 || y == 3) && !flag) {
        return 1;
    }

    return 0;
}
