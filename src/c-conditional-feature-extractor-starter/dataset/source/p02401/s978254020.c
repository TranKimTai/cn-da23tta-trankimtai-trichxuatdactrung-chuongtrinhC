#include<stdio.h>

int main(void) {
	int d[10000], a, b, i=0, j, flag = 1;
	char c;
	
	do{
		scanf("%d %c %d", &a, &c, &b);
		
		switch(c) {
		case '+':
			d[i] = a + b;
			break;
		case '-':
			d[i] = a - b;
			break;
		case '*':
			d[i] = a * b;
			break;
		case '/':
			d[i] = a / b;
			break;
		case '?':
			flag = 0;
			break;
		}
		
		i++;
	} while(flag);
	
	for(j = 0; j < i-1; j++) {
		printf("%d\n", d[j]);
	}	
	return 0;
}