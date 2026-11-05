#include<stdio.h>
int main()
{
	int j,i,a,b,c,d,s;
	s=0;
	while(~scanf("%d%d%d%d",&a,&b,&c,&d))
	{
		if(a>=d||b<=c)
			printf("%d",s);
	else
	{
		if(b>d)
					s=d-c;
				else if(b<d)
				{
					s=b-c;
				printf("%d",s);
				}
	}
	}
	return 0;
 } 	