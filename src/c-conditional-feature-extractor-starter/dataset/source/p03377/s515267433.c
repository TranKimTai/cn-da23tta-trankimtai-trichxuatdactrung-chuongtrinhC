#include <stdio.h>

int main(void){
	int a, b, x;
	int hantei = 0;
	scanf("%d%d%d" ,&a, &b, &x);
	
	if (a <= x){
		if(x-a<=b) hantei=1;
	}

	if (hantei) printf("Yes\n");
	else printf("No\n");
	return 0;
}