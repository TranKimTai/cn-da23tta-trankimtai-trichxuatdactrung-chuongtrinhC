#include<stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (
		(a == b == c) || 
		((a!=b)&&(b!=c)&&(c!=a))
		) {
		printf("NO");
	}
	else
		printf("YES");

	return 0;
}