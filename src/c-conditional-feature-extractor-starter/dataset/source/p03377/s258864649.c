#include <stdio.h>

int
main(void)
{
	int A, B, X;
	scanf("%d %d %d", &A, &B, &X);

	X -= A;
	if (X >= 0 && X <= B)
		puts("YES");
	else
		puts("NO");
	return (0);
}
