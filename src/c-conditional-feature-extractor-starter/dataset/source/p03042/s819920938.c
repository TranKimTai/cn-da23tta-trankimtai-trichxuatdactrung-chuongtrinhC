#include <stdio.h>


int main(void) {
	int input_num = 0;
	int YYMM_flag1 = 0;
	int YYMM_flag2 = 0;
	int MMYY_flag1 = 0;
	int MMYY_flag2 = 0;


	scanf("%d", &input_num);

	if (0 <= (input_num % 100) && (input_num % 100) <= 99) {
		MMYY_flag1 = 1;
		if (1 <= (input_num / 100) && (input_num / 100) <= 12) {
			MMYY_flag2 = 1;
		}
	}
	if (1 <= (input_num % 100) && (input_num % 100) <= 12) {
		YYMM_flag1 = 1;
		if (1 <= (input_num / 100) && (input_num / 100) <= 99) {
			YYMM_flag2 = 1;
		}
	}
	if (MMYY_flag1 == 1 && MMYY_flag2 == 1 && YYMM_flag1 == 1 && YYMM_flag2 == 1) {
		printf("AMBIGUOUS\n");
	}
	else if (MMYY_flag1 == 1 && MMYY_flag2 == 1 && (YYMM_flag1 == 0 || YYMM_flag2 == 0)) {
		printf("MMYY\n");
	}
	else if ((MMYY_flag1 == 0 || MMYY_flag2 == 0) && YYMM_flag1 == 1 && YYMM_flag2 == 1) {
		printf("YYMM\n");
	}
	else {
		printf("NA\n");
	}

}