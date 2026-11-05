#include <stdio.h>
int main(){
	int a,b,x;
	scanf("%d%d%d", &a, &b, &x);
	if((x<a)||(a+b<x))
		printf("NO");
	else
		printf("YES");
	return 0;
}