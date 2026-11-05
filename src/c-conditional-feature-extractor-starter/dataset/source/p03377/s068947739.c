#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int A, B, X;
    scanf("%d %d %d", &A, &B, &X);
    if(X <= A + B && ((A < X && B!= 0) || (A == X && B == 0)))
        printf("YES\n");
    else
        printf("NO\n");
}

