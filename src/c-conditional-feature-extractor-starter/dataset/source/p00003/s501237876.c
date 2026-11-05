#include <stdio.h>
int main(void) 
{
	int a, b, c, n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a % 5 == 0 && b % 4 == 0 && c % 3 == 0)
			printf("Yes\n");
		else if (b % 5 == 0 && c % 4 == 0 && a % 3 == 0)
			printf("Yes\n");
		else if (c % 5 == 0 && a % 4 == 0 && b % 3 == 0)
			printf("Yes\n");
		else if (a == b || b == c || c == a) {
			printf("Yes\n");
			if (a == b && b == c && c == a) {
				printf("No\n");
			}
		}
		else
			printf("No\n");
	}
	return 0;
}

