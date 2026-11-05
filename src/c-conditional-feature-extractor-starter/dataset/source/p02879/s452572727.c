#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
     if(a==0||b==0)
        printf("-1\n");
    else if(((9<a)||(a<1))||((9<b)||(b<1)))
        printf("-1\n");
    else if((9>=a>=1)&&(9>=b>=1))
        printf("%d\n",a*b);
     //if(a==0||b==0)
        //printf("-1\n");
    return 0;
}
