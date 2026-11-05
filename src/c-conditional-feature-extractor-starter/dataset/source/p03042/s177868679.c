#include<stdio.h>
int main()
{
    int a,b,m,n,i,j,k,l;
    scanf("%d",&n);

    a=n/100;
    b=n%100;
    if(n>1000)
    {
      if((a>0 && a<=12) && (b>0 && b<=12))
        printf("AMBIGUOUS\n");
        else if((a>0 && a<=12) && b>12)
        printf("MMYY\n");
    else if((b<=12 && b>0) && a>0)
        printf("YYMM\n");

    else
        printf("NA\n");
    }
    else if(n>100 && n<=999)
    {
        a=n/100;
        m=n%10;
        j=n/10;
        k=j%10;
        b=k*10+m;
    if((a>0 && a<=12) && (b>0 && b<=12))
        printf("AMBIGUOUS\n");
       else  if((a>0 && a<=12) && b>12)
        printf("MMYY\n");
    else if((b<=12 && b>0) && a>0)
        printf("YYMM\n");

    else
        printf("NA\n");
    }
    else
        printf("NA\n");

    return 0;
}
