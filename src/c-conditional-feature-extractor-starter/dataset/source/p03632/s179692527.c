#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,c,d,common;

 while(~scanf("%d %d %d %d",&a,&b,&c,&d)){

 if(a>=d || c>=b || a==b || c==d)
      common=0;

 else
   {if   (c>=a && d<=b)
        common=d-c;
    else if (c>=a && b<d)
        common=b-c;
    else if (c<a && b<=d)
        common=b-a;
    else if (c<a && d<b)
        common=d-a;
   }
printf("%d\n",common);
  }
}