#include <stdio.h>
#define A 80
#define B 65
#define C 50
#define D 30
#define AB -1
int main(void)
{
	int m, f, r, a;
	char grade;
	while(scanf("%d%d%d", &m, &f, &r), (m != AB) || (f != AB) || (r != AB)){
		a = m + f;
		if((m == AB) || (f == AB) || (a < D)){
			grade = 'F';
		}else if(a >= A){
			grade = 'A';
		}else if((a < A) && (a >= B)){
			grade = 'B';
		}else if((a < B) && (a >= C)){
			grade = 'C';
		}else if((a < C) && (a >= D)){
			grade = 'D';
		}
		if((a < C) && (a >= D) && (r >= C)){
			grade = 'C';
		}
		printf("%c\n", grade);
	}
	return 0;
}