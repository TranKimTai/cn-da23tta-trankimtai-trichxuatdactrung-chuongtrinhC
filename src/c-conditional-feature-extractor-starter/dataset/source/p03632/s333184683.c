#include<stdio.h>
#include<string.h>

int main(void) {

	int a, b, c, d;
	int time;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	   
	//a<=cの場合にaとcを固定//
	if (a <= c) {
		if (b <= d) {
			if (b > c) {
				time = b - c;
			}
			else {
				time = 0;
			}
			
		}
		else if (b >= d) {
			time = d - c;
		}
	}
	//a>cの場合にそれらを固定//
	else if (a > c) {
		if (b <= d) {
			time = b - a;
		}
		else if(b > d) {
			if (b > d) {
				time = d - b;
			}
			else{
				time = 0;
			}
		}
	}

	printf("%d", time);

	return 0;
}