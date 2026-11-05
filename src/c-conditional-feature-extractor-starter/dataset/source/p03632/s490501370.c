#include <stdio.h>
int main()
{
	int a1,a2,b1,b2;
	scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
	int both=0;
	a1=a1>=b1?a1:b1;
	a2=a2<=b2?a2:b2; 
	if(a2-a1<0)
		printf("%d",0);
	else printf("%d",a2-a1);
	return 0;
}