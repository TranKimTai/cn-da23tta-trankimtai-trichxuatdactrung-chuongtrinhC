#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b){
		if(b==c){
			printf("No");
		}
		printf("Yes");
	}else if(a==c){
		printf("Yes");
	}else if(b==c){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}
