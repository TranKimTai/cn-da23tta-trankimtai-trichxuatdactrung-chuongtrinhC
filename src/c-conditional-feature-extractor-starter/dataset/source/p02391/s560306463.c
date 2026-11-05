#include <stdio.h>

int main() {
	int inNum1, inNum2;
	
	scanf("%d %d", &inNum1, &inNum2);
	
	if (inNum1 > 1001 || inNum1 < -1001 || inNum2 > 1001 || inNum2 < -1001 ) {
		printf("error\n");
		return 0;
	}
	
	if (inNum1 > inNum2) {
		printf("a < b\n");
	} else if (inNum1 < inNum2) {
		printf("a > b\n");		
	} else {
		printf("a == b\n");		
	}
}
