#include<stdio.h>
int main()
{
    int s;
    scanf("%d", &s);

    int a, b;
    a = s / 100;
    b = s % 100;
    int c, d;
    c = 1 <= a && a <= 12;
    d = 1 <= b && b <= 12;
    printf("%d %d\n", c, d);
    if (c && d) {
        printf("AMBIGUOUS\n");
    } else if (c && !d) {
        printf("MMYY\n");
    } else if (!c && d) {
        printf("YYMM\n");
    } else {
        printf("NA\n");
    }
    return 0;
}