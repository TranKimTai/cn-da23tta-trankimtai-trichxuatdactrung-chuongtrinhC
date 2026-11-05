#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&a==c) printf("No");
    else if(a==b&&c!=a) printf("Yes");
    else if(a!=b&&a!=c&&b!=c) printf("No");
    else if(a==c&&b!=a) printf("Yes");
    else if(b==c&&a!=b) printf("Yes");
    return 0;
}
