#include<stdio.h>
int main(){
    int a,b,x;
    scanf("%d%d%d",&a,&b,&x);
    if((a+b)>x&&a<x) printf("Yes\n");
    else printf("No\n");
    return 0;
}