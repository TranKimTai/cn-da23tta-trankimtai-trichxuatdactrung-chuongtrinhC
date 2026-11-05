#include <stdio.h>

int main() {
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%d\n", c > b ? 0 : a >= c && d <= b ? d - a : c >= a && d <= b ? d - c : b - c);
	return 0;
}
