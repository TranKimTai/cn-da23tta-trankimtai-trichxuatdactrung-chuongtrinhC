#include <stdio.h>
#include <math.h>
int main(void) {
	int a, b, c, t, x, y;
	t = a ; x = b ; y = c; 
	if(t<=b){
		t = b ; x = c ; y = a ;
	}
	else{}
	if(t<=c){
		t = c ; x = a ; y = b ;
	}
	else{}
	t = pow(t,2) ;x = pow(x,2); y = pow(y,2);
	if(t==sqrt(x+y)){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}