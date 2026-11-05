#include <stdio.h>

int main(void) {
	int N;
	scanf("%d",&N);
	if((N/100)!=0 && (N/100)<=12){
		if((N%100)!=0 && (N%100)<=12){
			printf("AMBIGUOUS");
		}else{
			printf("MMYY");
		}
	}else{
		if((N%100)!=0 && (N%100)<=12){
			printf("YYMM");
		}else{
			printf("NA");
		}
	}
	return 0;
}