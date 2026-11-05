#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if ((a < 1 || 9 < a) || (b < 1 || 9 < b))
    {
        printf("-1\n");
        return 0;
    }
    else
    {
        printf("%d\n", a * b);
        return 0;
    }
}