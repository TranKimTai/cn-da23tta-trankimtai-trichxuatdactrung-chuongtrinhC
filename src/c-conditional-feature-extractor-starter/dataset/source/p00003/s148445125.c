#include <stdio.h>

int main(void)
{
	int n,a,b,c,d,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a>b)
		{
			if(a<=c)
			{
				d=a;
				a=c;
				c=d;
			}
		}
		if(a<=b)
		{
			if(b<=c)
			{
				d=a;
				a=c;
				c=d;
			}
			if(b>c)
			{
				d=a;
				a=b;
				b=d;
			}
		}
		if(a*a==b*b+c*c)
		{
			printf("YES\n");
		}
		if(a*a!=b*b+c*c)
		{
			printf("NO\n");
		}
	}
	return 0;
}