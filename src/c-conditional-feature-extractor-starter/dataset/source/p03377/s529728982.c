#include<stdio.h>

int main(void){
    int A,B,X;
    scanf("%d %d %d",&A,&B,&X);
    if(X>=A&&X<=A+B){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}