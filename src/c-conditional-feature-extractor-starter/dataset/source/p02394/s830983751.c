#include <stdio.h>

int main(void){
	int W, H, x, y, r;
	
	scanf("%d %d %d %d %d %d", &W, &H, &x, &y, &r);

	/* 円中央＋半径が長方形の上下左右からはみ出しているか判定 */
	if ((W < (x+r)) || (0 > (x-r)) || (H < (y+r)) || (0 > (y-r))){
		printf("No\n");
	}/* それぞれはみ出してない場合は入っている*/
	else{
		 printf("Yes\n");
	}
	
		
	return 0;
}