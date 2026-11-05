#include <stdio.h>
int main(void) 
{
	int m, f, r;
	m = 1, f = 1, r = 1;
	while ((m != -1) || (f != -1) || (r != -1))
	{
		scanf("%d %d %d", &m, &f, &r);
		if (m == -1 && f == -1 && r == -1)
		{
			break;
		}

		if (m == -1 || f == -1)
		{
			printf("F");
		}
		if (m+f>=80)
		{
			printf("A");
		}
		if (m + f >= 65 && m + f < 80)
		{
			printf("B");
		}
		if (m + f >= 50 && m + f < 65)
		{
			printf("C");
		}
		if (m + f >= 30 && m + f < 50)
		{
			printf("D");
			if (r >= 50)
			{
				printf("C");
			}
		}
		if (m + f < 30)
		{
			printf("F");
		}
	}
	return 0;
}