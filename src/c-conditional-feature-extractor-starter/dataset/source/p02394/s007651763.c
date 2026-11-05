#include <stdio.h>

int main(){
	int w, h, x, y, r;
	scanf("%d%d%d%d%d", &w, &h, &x, &y, &r);
	if(x+r > w || y+r > h || x-r<0 || y-r<0 ){
		puts("No");
	}
	else puts("Yes");
	return 0;
}
