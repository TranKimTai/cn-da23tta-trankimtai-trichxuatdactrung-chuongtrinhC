#include <stdio.h>
int main(){
double a, b, d;
char c;
while(1){
	scanf("%lf %c %lf",&a, &c, &b);
	if(c=='?') break;
	if(c=='+'){
		d=a+b;
	} else if(c=='-'){
		d=a-b;
	} else if(c=='*'){
		d=a*b;
	} else if(c=='/'){
		d=a/b;
	}
    printf("%lf\n",d);
}
}