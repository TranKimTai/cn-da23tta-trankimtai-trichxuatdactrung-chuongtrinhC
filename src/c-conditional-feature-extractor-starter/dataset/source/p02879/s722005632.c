#include <stdio.h>

int main(void){
    int A, B, b;
    scanf("%d%d", &A, &B);
    b=1;
    if (A>=10) b=0;
    if (B>=10) b=0;
    if (b==1) printf("%d", A*B);
    else printf("-1");
    return 0;
}
