#include <stdio.h>

int main(void)
{
	int n;
	int i;
	
	int a;
	int b;
	int c;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		
		if (a == b && b == c) {
			printf("NO\n");
		}
		
		else if (a == b && a < c) {
			if ((c * c) == (a * a) + (b * b)) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		
		else if (a == c && a < b) {
			if ((b * b) == (a * a) + (c * c)) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		else if (b == c && b < a) {
			if ((a * a) == (b * b) + (c * c)) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}
	
	return (0);
}	