#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int A,B,C,D;

	scanf("%d %d %d %d",&A,&B,&C,&D);
	int time;

	if(C >= B || A >= D){
		time = 0;
	}
	else if(C >= A ){
		if(B >= D){
			time = D - C;
		}
		else{
			time = B - C;
		}
	}
	else if(A > C){
		if(B >= D){
			time = D - A;
		}
		else{
			time = B - A;
		}
	}
	printf("%d\n",time);

	return 0;
}