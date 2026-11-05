#include<stdio.h>
int main()
{
    long long m,n,a,b,c,i,j,k,l,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}