#include <stdio.h>
int main()
{
	int a, b;
	char op;
	while(1){
		int c;
		scanf("%d %c %d", &a, &op, &b);
		if(op == '?'){
			break;
		} else if(op == '+'){
			c = a + b;
		} else if(op == '-'){
			c = a - b;
		} else if(op == '*'){
			c = a * b;
		} else {
			c = a / b;
		}
		printf("%d\n", c);
	}
	return 0;
}