#include<stdio.h>

int main(void)
{
    int a;
    scanf("%d",&a);
    if(a/2 < 10 && a/3 < 10 && a/4 < 10 && a/5 < 10 && a/6 < 10 && a/7 < 10 && a/8 < 10 && a/9 < 10) printf("YES");
    else printf("NO");
    return 0;
}