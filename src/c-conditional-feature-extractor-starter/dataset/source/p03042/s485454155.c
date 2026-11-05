#include <stdio.h>

int main() {
	static char s[8];
	int a, b;

	scanf("%s", s);
	a = (s[0] - '0') * 10 + (s[1] - '0');
	b = (s[2] - '0') * 10 + (s[3] - '0');
	printf((a > 12 || a == 0) && (b > 12 || b == 0) ? "NA\n" : a > 12 && b <= 12 ? "YYMM\n" : a <= 12 && b > 12 ? "MMYY\n" : "AMBIGUOUS\n");
	return 0;
}
