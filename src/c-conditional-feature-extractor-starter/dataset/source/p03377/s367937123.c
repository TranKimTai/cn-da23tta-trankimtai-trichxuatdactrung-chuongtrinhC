#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a>c)
        printf("NO\n");
    else if(b>=(c-a))
        printf("YES");
    else
        printf("NO");
    return 0;
}