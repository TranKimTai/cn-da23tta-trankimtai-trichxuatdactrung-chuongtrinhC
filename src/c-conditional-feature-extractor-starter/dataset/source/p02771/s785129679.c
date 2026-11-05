#include <stdio.h>

int main(){
	int A;
	int B;
	int C;
	scanf ("%d %d %d",&A,&B,&C);
	if (A==B && A==C && C==B){
		printf ("No");
	}
	else if (A==B && A!=C){
		printf ("Yes");
	}
	else if (A==C && A!=B){
		printf ("Yes");
	}
	else if (B==C && B!=A){
		printf ("Yes");
	}
	else if (A!=B && A!=C && B!=C){
		printf ("No");
	}
	
	return 0;
}