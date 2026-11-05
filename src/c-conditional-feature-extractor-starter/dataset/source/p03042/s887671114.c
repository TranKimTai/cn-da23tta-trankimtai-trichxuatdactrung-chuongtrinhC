#include<stdio.h>
int main()
{
    int a,b,m,n,i,j;
    scanf("%d",&n);
    a=n/100;
    b=n%100;
    if((a>0 && a<=12) && b>12)
        printf("MMYY\n");
    else if((a>0 && a<=12) && (b>0 && b<=12))
        printf("AMBIGUOUS\n");
    else if((b<=12 && b>0) && a>0)
        printf("YYMM\n");
    else
        printf("NA\n");
    return 0;
}
