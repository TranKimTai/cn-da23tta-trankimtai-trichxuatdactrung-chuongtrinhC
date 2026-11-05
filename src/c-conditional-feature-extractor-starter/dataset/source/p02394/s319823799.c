#include <stdio.h>
#include <stdlib.h>

// cl /EHsc itp1_2_d.c
// Circle in a Rectangle
int main(int arc, char *argv[])
{
	int W,H,x,y,r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	
	if (((x-r) >= 0 && (y-r) >= 0) && ((x+r) <= W && (y+r) <= H)) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
}