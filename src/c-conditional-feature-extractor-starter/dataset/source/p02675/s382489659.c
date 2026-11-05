#include<stdio.h>
int main(void){
	int a;
	scanf("%d", &a);
	a = a % 10;

	if(a == 3){
		printf("bon");
		return 0;
	}
	else if(a == 0 || a == 1 || a == 6 || a == 8){
		printf("pon");
		return 0;
	}
	else{
		printf("hon");
	}
	return 0;
}

