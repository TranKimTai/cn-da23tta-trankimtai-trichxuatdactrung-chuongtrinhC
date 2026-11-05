#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("a ");
    if (a > b) {
        printf(">");
    }
    else if (a == b) {
        printf("==");
    }
    else {
        printf("<");
    }
    printf(" b\n");

    return 0;
}