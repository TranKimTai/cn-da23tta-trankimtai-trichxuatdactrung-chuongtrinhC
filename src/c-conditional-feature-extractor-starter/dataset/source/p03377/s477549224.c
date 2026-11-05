#include <stdio.h>

int main(void) {
	int a,b,x;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&x);
		if(a+b<x){
			printf("NO");
		}else if(x < a){
			printf("NO");
		}else{
			printf("YES");
		}	
	return 0;
}
