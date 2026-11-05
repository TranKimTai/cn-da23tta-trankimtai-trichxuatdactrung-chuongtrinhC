#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
	int a,b,x,i;
	scanf("%d %d %d",&a,&b,&x);
	for(i=0;i<=b;i++){
		if(a+i==x){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}