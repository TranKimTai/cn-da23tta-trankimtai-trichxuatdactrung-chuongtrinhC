#include<stdio.h>
int main(void){
	int m, f, r, sum;
	do{
		scanf("%d %d %d\n", &m, &f, &r);
		if(m==-1 && f==-1 && r==-1){
			break;
		}else if(m == -1 || f == -1){
			printf("F\n");
		}
		sum = m+f;
		if(sum >= 80){
			printf("A\n");
		}else if(sum >= 65){
			printf("B\n");
		}else if(sum >= 50){
			printf("C\n");
		}else if(sum >= 30){
			if(r >= 50){
				printf("C\n");
			}else{
				printf("D\n");
			}
		}else if(sum < 30){
			printf("F\n");
		}
	}while(1);
	return 0;
}

