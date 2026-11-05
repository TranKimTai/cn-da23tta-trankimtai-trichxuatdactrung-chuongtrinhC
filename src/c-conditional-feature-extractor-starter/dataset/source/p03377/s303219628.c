#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a>c)
        printf("No");
    else if(b>=c-1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
