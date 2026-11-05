#include<stdio.h>
int main() {
	int a, b;
	char op;
	scanf("%d", &a);
	scanf("%c", &op);
	scanf("%d", &b);
	switch (op)
	 {
	case'?' :break;
	case'+': 
			printf("%d\n", a + b);
			break;
	case' *': 
			printf("%d\n", a*b);
			break;
	case'-': 
			printf("%d\n", a - b);
			break;
	case'/':
			printf("%d\n", a / b);
			break;
	}
	
	return 0;
}
