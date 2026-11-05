#include <stdio.h>
int main()
{
   int t,i,a,b,c,res;
   scanf("%d",&t);
   for(i=0;i<t;i++)
   {
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
    if(c*c==a*a+b*b)
        printf("YES\n");
    else
       printf("NO\n");

    }
   }




    return 0;
}