#include <stdio.h>

int main(void)
{
	int N;
	int x, y, z;
	int i, flag;
	scanf("%d", &N);

	for (i = 0; i < N; ++i) {
		scanf("%d %d %d", &x, &z, &y);
		flag = 0;
		if (x >= y && x >= z) {
			flag = (x*x == (y*y + z*z));
		} else if (y >= x && y >= z) {
			flag = (y*y == (x*x + z*z));
		} else {
			flag = (z*z == (x*x + y*y));
		}
		if (flag) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
}