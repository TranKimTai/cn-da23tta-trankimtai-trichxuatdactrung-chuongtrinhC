#include<stdio.h>

int main()
{
	int x, y,z;
	char c;
	scanf("%d %d", &x, &y);
	scanf("%c", &c);
	if ( c!= '\n')
	{
		printf("-1");
	}
	else
	{
		z = x * y;

			printf("%d", z );

	}
}