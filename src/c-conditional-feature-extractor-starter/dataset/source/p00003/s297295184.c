#include<stdio.h>

int main(void){
	int N, a, b, c, i, k;

	scanf("%d", &N);

	for(i = 0; i < N; i++){
		scanf("%d %d %d", &a, &b, &c);
		if(a > b){
			k = a;
			a = b;
			b = k;
		}
		if(b > c){
			k = b;
			b = c;
			c = k;
		}

		if(c*c == a*a + b*b){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}

	return 0;
}