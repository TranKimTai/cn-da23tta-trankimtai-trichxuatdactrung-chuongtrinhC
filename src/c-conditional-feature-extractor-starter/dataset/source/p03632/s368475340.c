#include<stdio.h>
int main(void)
{
    int a,b,c,d,t,min,max;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<c) min=c;
    else    min=a;
    if(b<d) max=b;
    else    max=d;
    t=max-min;
    if(t>=0)    printf("%d",t);
    else    printf("0");
    return 0;
}
