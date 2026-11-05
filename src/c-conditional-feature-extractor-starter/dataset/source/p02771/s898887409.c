#include<stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if ((a == b) && (b == c))
	{
		printf("No");
	}
	else
	{
		printf("Yes");
	}

	return 0;
}
