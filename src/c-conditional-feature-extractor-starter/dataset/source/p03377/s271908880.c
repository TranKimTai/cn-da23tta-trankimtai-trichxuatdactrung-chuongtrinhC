#include <stdio.h>
 
int main(){
int a,b,x;
scanf("%d\n",&a);
scanf("%d\n",&b);
scanf("%d\n",&x);
if( a <= x && a + b >= x)
	printf("yes");
else
	printf("no");
}