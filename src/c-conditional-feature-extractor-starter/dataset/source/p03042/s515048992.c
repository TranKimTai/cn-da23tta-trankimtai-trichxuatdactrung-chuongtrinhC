#include<stdio.h>
int main()
{
	int S,c,d;
	float b;
	scanf("%d",&S);
	c=S/10;
	d=c%10;
	b=S%10;
	if(c>=1 && c<=12 && b>=1 && b<=12)
	{
		printf("AMBIGUOUS");
	}
	else if(d>=1 && d<=12)
	{
		printf("MMYY\n");
	}
	 else if(b>=1 && b<=12)
	{
		printf("YYMM\n");
	}
	else printf("NA\n");
	return 0;
}