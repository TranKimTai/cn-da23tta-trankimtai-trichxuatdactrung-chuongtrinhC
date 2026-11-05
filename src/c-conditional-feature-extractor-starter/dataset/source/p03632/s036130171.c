#include<stdio.h>
int main()
{
	int A,B,C,D;
	int i,n;
	scanf("%d%d%d%d",&A,&B,&C,&D);
	n=0;
	for(i=A;i<B;i++)
	{
		if(i>=C&&i<D)
		{
			n++;
		}
	}
	printf("%d\n",n);
	return 0;
}