#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,x;
    1<=a<=100;
    1<=b<=100;
    1<=x<=200;
    scanf("%d %d %d",&a,&b,&x);
    if(x<=(a+b)&&x>=a)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
