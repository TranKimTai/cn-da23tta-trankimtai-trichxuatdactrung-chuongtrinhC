#include<stdio.h>

int main(){
    int A, B, C;

    scanf("%d%d%d", &A, &B, &C);

    if((A==B && B!=C) || (B==C && C!=A) || (C==A && A!=B)){
        printf("Yes\n");
    }

    else{
        printf("No\n");
    }
    return 0;
}
