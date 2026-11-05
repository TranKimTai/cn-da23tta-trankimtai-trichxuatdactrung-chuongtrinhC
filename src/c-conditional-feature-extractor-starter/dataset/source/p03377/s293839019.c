#include <stdio.h>
int main ()
{
    int a,b,x,d;
    scanf("%d%d%d",&a,&b,&x);
    d=a+b;
    if(a==x||d>=x)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}