#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
    int A = 0;
    int B = 0;
    int X = 0;
    int temp = 0;

    scanf("%d%d%d", &A, &B, &X);

    temp = A + B;
    if ((X <= temp) && (X > A)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}