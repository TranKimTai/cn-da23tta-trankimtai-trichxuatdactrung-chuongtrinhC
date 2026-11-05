#include<stdio.h>
int main()
{
	int A, B, C, D;
	scanf("%d%d%d%d", &A, &B, &C, &D);
	if(A >= D || B <= C)
		printf("0");
	if(B > D)
		printf("%d", D - C);
	else
		if(B > C)
			printf("%d", B - C);
	if(D > B)
		printf("%d", B - A);
	else
		if(D > A)
			printf("%d", D - A);
	return 0;
}