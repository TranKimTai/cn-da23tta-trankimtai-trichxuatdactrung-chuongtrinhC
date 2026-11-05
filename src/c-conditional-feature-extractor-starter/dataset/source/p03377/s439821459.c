#include <stdio.h>
int main(){
    int A, B, X;
    scanf("%d %d %d", &A, &B, &X);
    printf(A <= X && X <= A + B ? "YES\n" : "NO\n");
    return 0;
}
