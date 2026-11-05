#include<stdio.h>

int main(void){
	int hon;
	scanf("%d",&hon);
	switch(hon%10){
		case  2:
		case 4:
		case 5:
		case 7:
		case 9:
			puts("hon");
			break;
		case 0:
		case 1:
		case 6:
		case 8:
			puts("pon");
			break;
		default:
			puts("bon");
		}
		return 0;
	}
