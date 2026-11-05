#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("请分别输入A和B的值：");
    scanf("%d %d",&a,&b);
    if(a>9||b>9||a<0||b<0)
    {
        printf("-1");
    }
    else
    {
        c=a*b;
        printf("%d",c);
    }
    return 0;
}
