#include <stdio.h>

int main(void){
	int m,f,r;

	while(scanf(" %d %d %d",&m,&f,&r) != EOF){
		if(m == -1 && f == -1 && r == -1) return 0;
		if(m == -1 || f == -1){
			printf("F\n");
		}else {
		int sum = m+f;
		if(sum >= 80) printf("A\n");
		if(sum < 80 && sum >= 65) printf("B\n");
		if(sum < 65 && sum >= 50) printf("C\n");
		if(sum < 50 && sum >= 30){
			if(r >= 50) {
				printf("C\n");
			}else{
				printf("D\n");	
			}
		}
		if(sum < 30) printf("F\n");
		}
	}
	return 0;
}