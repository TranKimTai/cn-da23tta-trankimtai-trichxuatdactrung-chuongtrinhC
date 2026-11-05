#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a==b&&a!=c)||(b==c&&b!=a)||(a==c&&a!=b))
        printf("Yes");
        else
            printf("No");

}