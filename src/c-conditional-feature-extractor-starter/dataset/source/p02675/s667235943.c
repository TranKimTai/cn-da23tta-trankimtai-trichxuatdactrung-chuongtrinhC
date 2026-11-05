#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void) {
	int n;
	int ans = 0;
	scanf("%d", &n);
	if (n >= 100)
		ans = n % 10;
	if (n >= 10)
		ans = n % 10;
	else
		ans = n;
	if (ans == 3)
		printf("bon");
	else if (ans == 0)
		printf("pon");
	else if (ans == 1)
		printf("pon");
	else if (ans == 6)
		printf("pon");
	else if (ans == 8)
		printf("pon");
	else
		printf("hon");
	return 0;
}