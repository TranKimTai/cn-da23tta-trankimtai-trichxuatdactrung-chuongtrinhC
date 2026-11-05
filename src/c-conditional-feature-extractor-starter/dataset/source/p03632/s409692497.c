#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if(b < c)
		printf("0\n");
	
	else if(a < c && b > d)
		printf("%d\n", d - c);
		
	else
		printf("%d\n", b - c);

	return 0;
}
