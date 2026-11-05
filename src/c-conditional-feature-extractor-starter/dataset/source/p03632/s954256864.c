#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int ab = b - a;
	int abc = ab - c;
	if(abc > 0) {
		printf("%d",abc);
	}else{
		printf("%d",0);
	}

	return 0;
}