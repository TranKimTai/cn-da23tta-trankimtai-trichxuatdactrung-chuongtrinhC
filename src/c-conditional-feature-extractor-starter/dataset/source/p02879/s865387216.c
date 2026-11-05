#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(1<=a&&a<=9&&1<=b&&b<=9){
        printf("%d\n",a*b);
    }
    else{
        printf("-1\n");
    }
    return 0;
}
