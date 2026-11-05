#include<stdio.h>

int main()
{
	int m, f, r, point;
	scanf("%d %d %d", &m, &f, &r);
	while (m != -1 || f != -1 || r != -1)
	{
		if (m != -1 && f != -1)
		{
			point = m + f;
			if (point >= 80)
				printf("A\n");
			else if (point >= 65)
				printf("B\n");
			else if (point >= 50 || r >= 50)
				printf("C\n");
			else if (point >= 30)
				printf("D\n");
			else
				printf("F\n");
		}
		else
			printf("F\n");
		scanf("%d %d %d", &m, &f, &r);
	}

	return 0;
}
