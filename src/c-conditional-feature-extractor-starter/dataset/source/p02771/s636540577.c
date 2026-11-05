#include<stdio.h>
int main()
{  long long a,b,c;
   scanf("%lld%lld%lld",&a,&b,&c);
   if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&a!=b)) printf("Yes");
   else printf("No");
} 