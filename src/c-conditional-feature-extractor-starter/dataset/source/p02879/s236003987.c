#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("please input integer:");
   scanf("%d %d",&a,&b);
   if(a>9)
     printf("c=-1");
   if(b>9)
     printf("c=-1");
   else
    c=a*b;
   printf("%d\n",c);
}