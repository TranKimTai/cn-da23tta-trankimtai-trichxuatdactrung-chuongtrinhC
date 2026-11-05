#include<stdio.h>
int main(void){
	int a,b,c;
	scanf("%d %d",&a,&b,&c);
	if(a<b&&b<c){
		puts("Yes");
		return 0;
	}
	
	puts("No");
	return 0;
}

