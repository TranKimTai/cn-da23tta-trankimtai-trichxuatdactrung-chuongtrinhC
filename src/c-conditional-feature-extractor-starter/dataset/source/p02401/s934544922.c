#include <stdio.h>

int main(void)
{
	char op;
	int a, b;
	for (int i = 0;; i++)
	{
		scanf("%d %c %d", &a, &op, &b);
		int  wa = a + b, sa = a - b, seki = a*b;
		float syou = a / b;
		if (op == '+')printf("%d", wa); 
		if (op == '-')printf("%d", sa); 
		if (op == '*')printf("%d", seki); 
		if (op == '/')printf("%.0f",syou); 
		if (op == '?')break;
		printf("\n");
	}
	return 0;
}
