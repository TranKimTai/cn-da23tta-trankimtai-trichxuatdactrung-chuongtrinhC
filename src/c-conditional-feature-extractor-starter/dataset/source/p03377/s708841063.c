#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d%d",&a,&b,&x);
    int t=a+b;
    int j=t/2;
    if(x==j){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
