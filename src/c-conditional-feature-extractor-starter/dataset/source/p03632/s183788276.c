#include<stdio.h>
int main()
{
  int a,b,c,d,low,hig;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a>c) low=a;
   else   low=c;
  if(b>d) hig=d;
   else   hig=b;
   if(low<hig) printf("%d\n",hig-low);
    else        printf("0\n");
 
   return 0;
}