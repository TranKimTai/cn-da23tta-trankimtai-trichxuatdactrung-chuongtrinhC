#include <stdio.h>

int main() {
	int W,H,x,y,r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	// condition W
	if ( (x < r) || (W - x) < r) {
		printf("No\n");
		return 0;
	}
	// condition H
	if ( (y < r) || (H - y) < r) {
	 	printf("Yes\n");
		return 0;
    }
  	printf("Yes\n");
	return 0;
}