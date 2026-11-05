#include<stdio.h>
int main()
{
	int a,b,c,d,min,max;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
	{
		max=a<c?c:a;
		min=b>d?d:b;
		
		if((min-max)<=0)
		printf("0\n");
		else
		printf("%d\n",min-max);
	}
	return 0;
}