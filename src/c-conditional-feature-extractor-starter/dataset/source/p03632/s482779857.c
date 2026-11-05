#include <stdio.h>
 
int main(){
	int A, B, C, D;

	scanf("%d %d %d %d", &A, &B, &C, &D);

	if(A <= C) {
		if(B <= C) {
			printf("0");
		}

		else if(B > C && B <= D) {
			printf("%d", B - C);
		}

		else if(B > D) {
			printf("%d", D - C);
		}
	}

	else if(A > C) {
		if(D <= A) {
			printf("0");
		}

		else if(D > A && D <= B) {
			printf("%d", D - A);
		}

		else if(D > B) {
			printf("%d", B - A);
		}
	}
}