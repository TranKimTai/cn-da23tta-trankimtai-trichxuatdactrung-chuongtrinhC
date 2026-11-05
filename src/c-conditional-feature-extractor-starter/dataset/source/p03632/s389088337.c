#include<stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (b <= c) printf("%d", 0);
	else printf("%d", b - c);
	return 0;
}