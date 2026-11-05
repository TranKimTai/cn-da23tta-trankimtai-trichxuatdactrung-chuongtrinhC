
#include <stdio.h>

int main()
{
  long long int a,b,c,d,max1,max;
  scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
   if( c<=b)
   {
       printf("%lld",(abs(b-c)>=abs(a-d))?abs(a-d):abs(b-c));
   }else{
       
       printf("0");
       
   }
   
    return 0;
}