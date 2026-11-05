#include<stdio.h>

int main()
{
    int a,b,x;

    scanf("%d %d %d",&a,&b,&x);

    if((a+b>x && a==x)||(a+b)>x && a<x)
    {
        printf("YES\n");
    }
    else if(a>x || a+b<x)
    {
        printf("NO\n");
    }


    return 0;
}
