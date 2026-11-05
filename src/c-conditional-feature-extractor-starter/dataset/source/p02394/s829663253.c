#include <stdio.h>
int main(){
	int W, H, x, y, r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y ,&r);
	if(x>W || y>H || y+r>H || x+r>W || x<0 || y<0){
	 	printf("No\n");
	} else {
		printf("Yes\n");
	}
	return 0;
}