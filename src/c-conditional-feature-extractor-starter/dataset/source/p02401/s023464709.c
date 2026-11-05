#include<stdio.h>
int main(void) {
	int a[1000], b[1000],l,d;
	int i = 0;
	char c[1000];
	while (1) {
		scanf("%d %c %d", &a[i], &c[i], &b[i]);
		if (c[i] == '?') {
			break;
		}
		i++;
	}
	for (l = 0; l < i; l++) {
		switch (c[l]) {
		case '+':
			d = a[l]+b[l];
			printf("%d\n", d);
			break;
		case '-':
			d = a[l] - b[l];
			printf("%d\n", d);
			break;
		case '*':
			d = a[l] * b[l];
			printf("%d\n", d);
			break;
		default:
			d = a[l] / b[l];
			printf("%d\n", d);
			break;
		}
	}
	return 0;
}
