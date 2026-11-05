#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (0 <= a <= 100 && 0 <= b <= 100 && 0 <= c <= 100)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	

	return 0;
}