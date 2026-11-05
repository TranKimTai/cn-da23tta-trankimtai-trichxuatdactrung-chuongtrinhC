#include <stdio.h>

int main(void)
{
	int S, upper, lower, flag = 0;

	scanf("%d", &S);
	upper= S / 100;
	lower = S % 100;

	if (upper == 0 || lower == 0) {
		printf("NA\n");
	}

	else if (lower <= 12) {
		if (upper <= 12) {
			printf("AMBIGUOUS\n");
		}

		else {
			printf("YYMM\n");
		}
	}

	else if (upper <= 12) {
		if (lower <= 12) {
			printf("AMBIGUOUS\n");
		}

		else {
			printf("MMYY\n");
		}
	}

	return 0;
}