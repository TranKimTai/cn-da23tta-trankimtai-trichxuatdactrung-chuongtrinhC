#include <stdio.h>
#include <string.h>
int main()
{
    int a, b;
    char op[10];
    scanf("%d %s %d", &a, op, &b);
    while (strcmp(op, "?") != 0) {
        if (strcmp(op, "+") == 0) {
            printf("%d\n", a + b);
        } else if (strcmp(op, "-") == 0) {
            printf("%d\n", a - b);
        } else if (strcmp(op, "*") == 0) {
            printf("%d\n", a * b);
        } else if (strcmp(op, "/") == 0) {
            printf("%d\n", a / b);
        } else {
            break;
        }
        scanf("%d %s %d", &a, op, &b);
    }

    return 0;
}