#include<stdio.h>

int main(void) {
	int A, B, C,c=0;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	if (A == B)
		c++;
	if (A == C)
		c++;
	if (B == C)
		c++;
	if (c == 1)
		printf("Yes");
	else printf("No");
	return 0;
}