#include <stdio.h>

int main(void)
{
        int a,b,x;

        scanf("%d%d%d",&a,&b,&x);

        if ((b<x)||(a>x)||(a+b<x))
                printf("NO\n");
        else
                printf("YES\n");

        return 0;
}