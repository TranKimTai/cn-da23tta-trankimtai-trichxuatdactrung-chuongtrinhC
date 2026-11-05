#include <stdio.h>
int main()
{
	int a[20001], b[20001], op, i;
	for (i = 1;i <= 20001; i++) {
		scanf("%d %d %d", &a[i], op, b[i]);
		if (op = '?')
			break;
		else if (op = '+')
			printf("%d\n", a[i] + b[i]);
		else if (op = '-')
			printf("%d\n", a[i] - b[i]);
		else if (op = '*')
			printf("%d\n", a[i] * b[i]);
		else if (op = '/')
			printf("%d\n", a[i] / b[i]);
	}
	return 0;
}