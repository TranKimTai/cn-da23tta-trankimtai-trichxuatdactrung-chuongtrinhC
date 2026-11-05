#include "stdio.h"

int main(void)
{
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    if(a == b)
    {
        if(a != c)
            printf("Yes");
        else
            printf("No");
    }

    else if(a == c)
    {
        if(a != b)
            printf("Yes");
        else
            printf("No");
    }

    else if(b == c)
    {
        if(b != a)
            printf("Yes");
        else
            printf("No");
    }

    else
    {
        printf("No");
    }
}