#include<stdio.h>
int main() {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if ((b <= c && d >= a) || (b >= c && d<= a)) {
		printf("0\n");
	}
	else if (a <= c && b <= d) {
		printf("%d\n", b - c);
	}
	else if (a >= c && b >= d) {
		printf("%d\n", d - a);
	}
	else if (a <= c && b >= d) {
		printf("%d\n", d - c);
	}
	else if (a >= c && b <= d) {
		printf("%d\n", b - a);
	}
	return 0;
}