#include <stdio.h>
int main(void) {
	int w,h,x,y,r;
	scanf("%d %d %d % %d\n",&w,&h,&x,&y,&r);
	0 < w <= 100;
	0 < h <= 100;
	0 < r <= 100; 
	
	if(0<=(x-r) && (x+r)<=w && h>=(y+r) && 0<=(y-r))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}

