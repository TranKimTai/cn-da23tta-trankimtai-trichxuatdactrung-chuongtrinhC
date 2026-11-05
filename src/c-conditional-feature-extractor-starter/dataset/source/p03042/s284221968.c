#include <stdio.h>

int main(void) {
	char S[100];
	scanf("%s", S);
	int a = S[0] - '0';
	int b = S[1] - '0';
	a = 10 * a + b;
	b = S[2] - '0';
	a = 10 * a + b;
	b = S[3] - '0';
	a = 10 * a + b;


	int A = a / 100 * 100;
	if (A > 1200) {
		if (a - A > 0 && a - A < 13)printf("YYMM\n");
		else printf("NA\n");
	}
	else if (A > 0) {
		if(a-A>0&&a-A<13)printf("AMBIGUOUS\n");
		else printf("MMYY\n");
	}
	else printf("NA\n");

	return 0;
}