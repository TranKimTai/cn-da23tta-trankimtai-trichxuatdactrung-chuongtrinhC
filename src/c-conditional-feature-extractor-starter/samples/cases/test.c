#include <stdio.h>

int result(int a)
{
	if(a % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	if(result(7) == 0)
	{
		printf("so le");
	}
	else
	{
		printf("so chan");
	}
}