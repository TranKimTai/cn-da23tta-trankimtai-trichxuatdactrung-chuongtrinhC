#include <stdio.h>

#define DATA 100

int main(void)
{
	int mid[DATA], final[DATA], add[DATA];
	int i, j, score, count = 0;

	for(i = 0;i < DATA;i++)
	{
		mid[i] = 0;
		final[i] = 0;
		add[i] = 0;
	}
	for(i = 0;i < DATA;i++)
	{
		count++;
		scanf("%d %d %d", &mid[i], &final[i], &add[i]);
		if(mid[i] + final[i] + add[i] == -3)
			break;
	}
	for(i = 0;i < count - 1;i++)
	{
		score = mid[i] + final[i];
		if((mid[i] == -1) || (final[i] == -1))
			printf("F\n");
		else if(score >= 80)
			printf("A\n");
		else if((65 <= score) && (score < 80))
			printf("B\n");
		else if((50 <= score) && (score < 65))
			printf("C\n");
		else if((30 <= score) && (score < 50))
		{
			if(add[i] >= 50)
				printf("C\n");
			else
				printf("D\n");
		}
		else if(mid[i] + final[i] + add[i] == -3)
			break;
		else if(score < 30)
			printf("F\n");
	}

	return 0;
}