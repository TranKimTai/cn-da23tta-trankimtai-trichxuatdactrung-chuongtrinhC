#include <stdio.h>
int calc(unsigned int a, unsigned int b, char op){
	switch (op) {
	case '?':return 0;
	case '+':return a + b;
	case '-':return a - b;
	case '*':return a * b;
	case '/':return a / b;
	default:return 0;
	}
}
int main(void){
	unsigned int a, b, ans;
	char op;
	while (1){
		scanf("%d %c %d", &a, &op, &b);
		if (ans = calc(a, b, op)) printf("%d\n",ans);
		else break;
	}
	return 0;
}