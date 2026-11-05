#include <stdio.h>

void x(int a, int b, int op){
	int n;

	switch(op){
	case '+' : n = a + b; printf("%d\n", n); break;
	case '-' : n = a - b; printf("%d\n", n); break;
	case '*' : n = a * b; printf("%d\n", n); break;
	case '/' : n = a / b; printf("%d\n", n); break;
	case '?' : break;
	}
}

int main(void){
	int a, b, op, n;

	scanf("%d ", &a);
	op = getchar();
	scanf(" %d\n", &b);
	
	x(a, b, op);

	return 0;
}