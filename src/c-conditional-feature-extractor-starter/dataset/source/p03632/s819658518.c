#include <stdio.h>
int main(void){
	int A,B,C,D,X,Y;
	scanf("%d %d %d %d",&A,&B,&C,&D);
	if( A > C){
		X = A;
	}else{
		X = C;
	}
	if( B > D){
		Y = D;
	}else{
		Y = B;
	}
	if( Y - X <= 0){
		printf("0");
		return 0;
	}else{
		printf("%d",Y-X);
		return 0;
	}
	
	return 0;
}