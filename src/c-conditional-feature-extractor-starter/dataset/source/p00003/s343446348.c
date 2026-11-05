#include <stdio.h>
int judge(int a, int b, int c) {
	return a == b + c || b == c + a || c == a + b;
}
int main() {
	int num;
	int a, b, c;
	scanf(" %d", &num);
	while (num--) {
		scanf(" %d %d %d", &a, &b, &c);
		printf("%s\n", judge(a * a, b * b, c * c) ? "YES" : "NO");
	}
	return 0;
}