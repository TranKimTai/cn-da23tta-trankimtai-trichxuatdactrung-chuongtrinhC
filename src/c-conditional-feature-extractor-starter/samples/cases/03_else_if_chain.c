#include <stdio.h>

int main(void) {
    int score = 85;

    if (score >= 90) {
        return 1;
    } else if (score >= 80) {
        return 2;
    } else if (score >= 50) {
        return 3;
    } else {
        return 4;
    }
}
