#include <stdio.h>

int main(void) {
	int A, B;
	if (scanf("%d%d", &A, &B) != 2) return 1;
	printf("%d\n", 1 <= A && A <= 9 && 1 <= B && B <= 9 ? A * B : -1);
	return 0;
}
