#include<stdio.h>

int main(void) {
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if (a < b){
		if (b < c) {
			printf("Yes\n");
		}
		else if(b >= c) {
			printf("No\n");
		}
	}
	else if(a >= b) {
		printf("No\n");
	}
	return 0;
}