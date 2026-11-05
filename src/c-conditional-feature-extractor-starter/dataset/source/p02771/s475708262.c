#include <stdio.h>

int main(){
	int A,B,C;
	
	scanf("%d%d%d",&A,&B,&C);
		if(A == B && A != C){
			printf("Yes");
		}else if(B != A && B == C ){
			printf("Yes");
		}else if(C == A && C != B){
			printf("Yes");
		}else if(A == B && A == C && B == C){
			printf("No");
		}
	return 0;
}