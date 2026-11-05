#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b, x;

    scanf("%d%d%d", &a, &b, &x);

    if(a==x){
        printf("Yes\n");
    }
    else if(a>x){
        printf("No\n");
    }
    else if(a<x){
        if(a+b>=x){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    
    return 0;
}