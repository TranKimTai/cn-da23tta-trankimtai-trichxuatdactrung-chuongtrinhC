#include <stdio.h>
int main(void){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int m=a>c?a:c,n=b>d?d:b;
	printf("%d",m>=n?0:n-m);
	return 0;
}