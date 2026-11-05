#include<stdio.h>
int main()
{
	int A1,A2,B1,B2,a;
	scanf("%d %d %d %d",&A1,&A2,&B1,&B2);
	if(A2<=B1||B2<=A1)
    	a=0;
	else if(A2>B1)
	{
		a=A2-B1;
		if(A2>B2)
			a=B2-B1;	
	}
	else
	{
		a=B2-A1;
		if(B2>A2)
			a=A2-A1;
	}
	printf("%d",a);
	return 0;
}