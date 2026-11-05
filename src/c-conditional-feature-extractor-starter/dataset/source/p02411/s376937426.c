#include <stdio.h>

int main(void)
{
	int m, f, r, t;

	for (;;) {
		scanf("%d %d %d", &m, &f, &r);
		if (m == -1 && f == -1 && r == -1) break;
		if (m == -1 || f == -1) {
			puts("F");
			continue;
		}
		if (t >= 80) {
			puts("A");
			continue;
		}
		if (t >= 65 && t < 80) {
			puts("B");
			continue;
		}
		if (t >= 50 && t < 65) {
			puts("C");
			continue;
		}
		if (t >= 30 && t < 50) {
			if (r >= 50) puts("C");
			else puts("D");
			continue;
		}
		if (t < 30) {
			puts("F");
			continue;
		}
	}
	return 0;
}

