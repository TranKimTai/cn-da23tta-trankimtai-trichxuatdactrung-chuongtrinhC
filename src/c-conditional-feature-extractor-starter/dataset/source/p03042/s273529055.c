#include<stdio.h>

int main()
{
	int S;
	scanf("%d", &S);
	
	if (S % 100 > 12||S % 100 <1) 
	{
		if (S > 1299) 
		{
			printf("NA");
		}
		else
		{
			printf("MMYY");
		}
	}

	else if (S > 1299) 
	{
		printf("YYMM");
	}
	else 
	{
		printf("AMBIGUOUS");
	}


	return 0;
}