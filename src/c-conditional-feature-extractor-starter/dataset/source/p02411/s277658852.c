#include <stdio.h>

int main(void)          
{
	int middle_t = 0, final_t = 0, Re_t = 0;
	
	while (1 > 0)
	{
		scanf("%d %d %d", &middle_t, &final_t, &Re_t);
		if (middle_t == -1 && final_t == -1 && Re_t == -1)
		{
			break;
		}

		if (middle_t + final_t >= 80) printf("A\n");
		if (middle_t + final_t >= 65 && middle_t + final_t < 80) printf("B\n");
		if (middle_t + final_t >= 50 && middle_t + final_t < 65 || Re_t >= 50) printf("C\n");
		if (middle_t + final_t >= 30 && middle_t + final_t < 50 && Re_t < 50 && final_t != -1 && middle_t != -1) printf("D\n");
		if (middle_t + final_t < 30 || final_t == -1 || middle_t == -1) printf("F\n");
	}


	return 0;
}