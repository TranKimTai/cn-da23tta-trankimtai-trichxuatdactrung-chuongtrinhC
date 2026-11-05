#include<stdio.h>

int main(void){
	int a, b, op;
	while(1){
		scanf("%d", &a);
		getchar();
		op = getchar();
		scanf("%d", &b);
		if(op == '?') break;
		if(op == '+') printf("%d\n", a+b);
		else if(op == '-') printf("%d\n", a-b);
		else if(op == '*') printf("%d\n", a*b);
		else if(op == '/') printf("%d\n", a/b);
	}
	return 0;
}
