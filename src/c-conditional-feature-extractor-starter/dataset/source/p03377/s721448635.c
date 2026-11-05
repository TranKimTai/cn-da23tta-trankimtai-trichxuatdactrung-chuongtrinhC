#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int A,B,C,X;

    if (scanf("%d %d %d", &A, &B, &X) < 3)
    {
        exit(1);
    }

    C = A + B;

    if (1 <= A && A <= 100 && 1 <= B && B <= 100 && 1 <= X && X <= 200)
    {
        if(A <= X && X <= C){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}