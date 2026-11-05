#include<stdio.h>

int main(){

	int S;
	
	scanf("%d", &S);
	
	if( S/100 <= 12 && S/100 >= 1 && S % 100 > 12)
	{
		printf("MMYY");
	} else if( S/100 > 12 && S % 100 <= 12  && S % 100 >= 1)
	{
		printf("YYMM");
	} else if( S/100 <=12  && S/100 >= 1 && S % 100 <= 12  && S % 100 >= 1)
	{
		printf("AMBIGUOUS");
	} else {
		printf("NA");
	}


	return 0;
}