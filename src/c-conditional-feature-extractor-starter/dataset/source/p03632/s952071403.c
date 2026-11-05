#include<stdio.h>

int main(void)
{
   int a, b, c, d, s, o;

   scanf("%d%d%d%d",&a,&b,&c,&d);
   if(a<c)
      s=c;
   else
      s=a;
   if(b<d)
      o=b;
   else
      o=d;
   if(s<o)
      printf("%d\n",o-s);
   else
      printf("0\n");
   return 0;
}