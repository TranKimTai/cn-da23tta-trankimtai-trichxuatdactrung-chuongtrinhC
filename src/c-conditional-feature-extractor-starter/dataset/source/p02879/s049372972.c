#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a*b;
	if(1<=a && a<=9 && 1<=b && b<=9){
	printf("%d\n",c);
	}
	else{
	printf("%d\n",-1);
	}
	return 0;
}