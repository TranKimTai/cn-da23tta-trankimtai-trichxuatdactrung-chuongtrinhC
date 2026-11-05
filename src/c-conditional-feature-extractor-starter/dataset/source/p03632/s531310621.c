#include<stdio.h>
int main()
{
    int a,b,c,d,m,M;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    M=(a>c ? a :c);
    m=(b>d ? d :b);
    if(m-M>0)
    printf("%d",m-M);
    else
        printf("0");
    return 0;
}
