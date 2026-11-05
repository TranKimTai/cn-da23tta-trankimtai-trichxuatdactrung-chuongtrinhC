#include <stdio.h>
#include <string.h>

int main() {
    int n; scanf("%d", &n);
    n %= 10;
    if (n == 3) printf("bon\n");
    else if (n == 0 || n == 1 || n == 6 || n == 8) printf("pon\n");
    else printf("hon\n");
}