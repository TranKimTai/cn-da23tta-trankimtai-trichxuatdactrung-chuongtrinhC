#include<stdio.h>

int main()
{
    int a, b, x;

    scanf("%d%d%d", &a, &b, &x);

    if(a==x){
        printf("Yes");
    }
    else if(a>x){
        printf("No");
    }
    else if(a<x){
        if(a+b>=x){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    
    return 0;
}