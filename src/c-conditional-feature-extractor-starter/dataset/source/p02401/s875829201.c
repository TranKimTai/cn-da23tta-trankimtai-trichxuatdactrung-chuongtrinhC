#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int a, b;
	char op;

	for (;;) 
	{
		scanf("%d %c %d", &a, &op, &b);

		if (op == '?') break;
		if ((0 > a || a > 20000) || (0 > b || b > 20000))
			continue;

		switch (op)
		{
		case '+':printf("%d\n", a + b);  break;
		case '-':printf("%d\n", a - b);  break;
		case '*':printf("%d\n", a * b);  break;
		case '/':
		{
			if (b != 0) {
				printf("%d\n", a / b);
			}  break;
		}
		}
	}
		return 0;
}
