#include<stdio.h>

int main(void){
	int A;
	int B;
	scanf("%d%d", &A, &B);
	if(A > 10 || B > 10) printf("-1\n");
	else if(A < 1 || B < 1)printf("-1\n");
	else printf("%d\n", A * B);
	return 0;
}
