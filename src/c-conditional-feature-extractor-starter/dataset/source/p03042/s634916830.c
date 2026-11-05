#include<stdio.h>

int main(void) {
	int a;
	int n, m;

	scanf("%d", &a);
	n = a / 100;
	m = a % 100;

	if ((m == 0 && (1 > n || n > 12)) || (n == 0 && (1 > m || m > 12))) {
		puts("NA");
	}
	else if ((1 <= n && n <= 12) && (1 <= m && m <= 12)) {
		puts("AMBIGUOUS");
	}
	else if (1 > n || n > 12) {
		puts("YYMM");
	}
	else
		puts("MMYY");
	return 0;
}