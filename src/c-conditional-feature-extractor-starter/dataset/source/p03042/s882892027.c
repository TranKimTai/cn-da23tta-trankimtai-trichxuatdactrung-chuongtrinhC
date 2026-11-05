#include<stdio.h>
int main(void){
	int S[4];
	int a,n,dig;
	scanf("%d",&n);
	for(a=3;a>=0;a--){
		dig=n%10;
		S[a]=dig;
		n=n/10;
	}
	if(((S[0]==0)&&(S[1]==0))||((S[2]==0)&&(S[3]==0))){
		printf("NA");
	}else{
	if(S[0]*10+S[1]<=12){
		if(S[2]*10+S[3]<=12){
			printf("AMBIGUOUS");
		}else{
			printf("MMYY");
		}
	}else{
		if(S[2]*10+S[3]<=12){
			printf("YYMM");
		}else{
			printf("NA");
		}
	}
	}
return 0;
}