#include<stdio.h>

int main(void){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a <= c){
		if(b <= d && b <= c) printf("%d\n", 0);
		if(b <= d && b > c) printf("%d\n", b - c);
		if(b > d) printf("%d\n", d - c);
	}else{
		if(b <= d) printf("%d\n", b - a);
		if(b > d) printf("%d\n", d - a);
	}

	return 0;
}
