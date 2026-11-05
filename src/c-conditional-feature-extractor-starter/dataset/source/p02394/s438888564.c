#include <stdio.h>


int main() {
	int w, h, x, y, r;

	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);

	//	円の中心が (r,r) 以上 (w-r, h-r) 未満ならOK

	if (x < r || y < r || x > w - r || y > h - r) {
		puts("No");
	}
	else {
		puts("Yes");
	}

	return 0;
}
