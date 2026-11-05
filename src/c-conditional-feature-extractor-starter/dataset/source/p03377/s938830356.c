#include <stdio.h>

int main(void)
{
	int a, b, x;
	
	scanf("%d %d %d", &a, &b, &x);
	
	if (a <= x){
		if ((a + b) >= x){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	else {
		printf("NO\n");
	}
	
	return (0);
}
