#include <stdio.h>

void is_possible(int A, int B, int X) {

    if(X >= A && X <= (A + B)) {
        printf("YES");
    }

    else {
        printf("NO");
    }

    printf("\n");

}

int main() {
    int A, B, X;

    scanf("%d %d %d", &A, &B, &X);

    is_possible(A, B, X);

    return 0;
}