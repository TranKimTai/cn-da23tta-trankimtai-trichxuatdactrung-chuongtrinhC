#include<stdio.h>

int main(){
	int a;
	int b;
	int c;
	int d;
	int i;
	int A;
	int B;
	int C;
	int aa;
	int bb;
	int cc;
	scanf("%d", &d);
	for(i = 0; i < d; i++){
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		A = a;
		B = b;
		C = c;
		aa = a * A;
		bb = b * B;
		cc = c * C;
		if(aa == bb + cc){
			printf("Yes\n");
		}else if(bb == aa + cc){
			printf("Yes\n");
		}else if(cc == aa + bb){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}