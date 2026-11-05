#include <stdio.h>
int main()
{
	int a,b,c,d,result;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	{
		if(b<=c||d<=a)
			result=0;
		else
		{
			if(a>c)
			{
				if(b<d)
					result=b-a;
				else
					result=d-a;
			}
			else
			{
				if(b>d)
					result=d-c;
				else
					result=b-c;
			}
		}
		printf("%d\n",result);
	}
	return 0;
}