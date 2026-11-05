#include<stdio.h>

int main(void)
{
	int a, b;
	int i, j;
	int ans[10000];
	char op;
	
	for (i = 0; i < 10000; i++) {
		scanf("%d %c %d", &a, &op, &b);
		
		if (op == '+') {
			ans[i] = a + b;
		}
		else if (op == '-') {
			ans[i] = a - b;
		}
		else if (op == '*') {
			ans[i] = a * b;
		}
		else if (op == '/') {
			ans[i] = a / b;
		}
		else if (op == '?') {
			break;
		}
	}
	
	for (j = 0; j < i; j++) {
		printf("%d\n", ans[j]);
	}
	
	return (0);
}