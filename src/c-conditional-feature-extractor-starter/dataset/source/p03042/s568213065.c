#include<stdio.h>

int main(void) {
	int l, r;

	scanf("%2d%2d", &l, &r);

	if (l <= 12 && 1 <= l) {
		if (r <= 12 && 1 <= r) {
			printf("AMBIGUOUS\n");
		}
		else {
			printf("MMYY\n");
		}
	}
	else {
		if (r <= 12 && 1 <= r) {
			printf("YYMM\n");
		}
		else {
			printf("NA\n");
		}
	}

	return 0;
}