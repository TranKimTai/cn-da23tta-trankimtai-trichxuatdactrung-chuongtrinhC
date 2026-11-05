#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("please input integer:");
   a=scanf("%d",&a);
   b=scanf("%d",&b);
   if(a>9)
     printf("c=-1\n");
   if(b>9)
     printf("c=-1\n");
   else
   {
     c=a*b;
   printf("%d\n",c);
   }
   return 0;
}
