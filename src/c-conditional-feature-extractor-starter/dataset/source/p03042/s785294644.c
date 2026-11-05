#include <stdio.h>

int main() {
	char S[5];
	int i[4];
	scanf("%s",S);
	i[0] = S[0] - '0';
	i[1] = S[1] - '0';
	i[2] = S[2] - '0';
	i[3] = S[3] - '0';

	int i1, i2;
	i1 = i[0] * 10 + i[1];
	i2 = i[2] * 10 + i[3];

	//最初の文字を調べる
	if (i1 > 12 && i1 <= 19) {	//YYMM可能性
		if (i2 > 0 && i2 <= 12) {
			printf("YYMM\n");
		}
		else {
			printf("NA\n");
		}
	}
	else if ((i1 > 0 && i1 <= 12)) {	//MMYY可能性
		if (i2 > 0 && i2 <= 12) {
			printf("AMBIGUOUS\n");
		}
		else if (i2 == 0) {
			printf("MMYY\n");
		}
		else if (i2 > 12 && i2 <= 19) {
			printf("MMYY\n");
		}
	}
	else if(i1 == 0){	//YYMM可能性
		if (i2 > 0 && i2 <= 12) {
			printf("YYMM\n");

		}
		else {
			printf("NA\n");
		}
	}
	else {
		printf("NA\n");
	}


	return 0;
}