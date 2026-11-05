#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a,b,c,t;
   while(~scanf("%d%d%d",&a,&b,&c))
   {
       if(a>c)
       {
           printf("NO\n");
       }
       else if(a+b<c)
       {
           printf("NO\n");
       }
       else if(a<b)
       {
          printf("YES\n");
       }
   }
    return 0;
}
