#include<stdio.h>
int main(void){
	int s,t,u=0;
	scanf("%d",&s);
	t=s%100;
	s/=100;
	if(1<=s&&s<=12)u+=1;
	if(1<=t&&t<=12)u+=2;
	switch(u){
	case 0:
		printf("NA");
		break;
	case 1:
		printf("MMYY");
		break;
	case 2:
		printf("YYYM");
		break;
	case 3:
		printf("AMBIGUOUS");
		break;
	}
	return 0;
}