#include<stdio.h>
int main(void)
{
    int a,b,x;
    scanf("%d %d %d",&a,&b,&x);
    if ((a<=x) && (a+b>x))
       printf("Yes\n");
    else
       printf("No\n");
    return 0;
} 