#include <stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	int a = N/100, b = N % 100, val_1 = 0, val_2 = 0;
	if (1 <= b && b <= 12) val_1++;
	if (1 <= a && a <= 12) val_2++;
	if (val_1 == 0 && val_2 == 0) printf("NA\n");
	else if (val_1 == 1 && val_2 == 0) printf("YYMM\n");
	else if (val_1 == 0 && val_2 == 1) printf("MMYY\n");
	else if (val_1 == 1 && val_2 == 1) printf("AMBIGUOUS\n");
	return 0;
}