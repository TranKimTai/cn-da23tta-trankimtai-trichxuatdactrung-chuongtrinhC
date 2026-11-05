#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(c>=b||a>=d)
	{
		printf("0\n");
	}
	else if(c<=a&&b<=d)
	{
		printf("%d\n",b-a);
	}
	else if(c<=a&&d>=b)
	{
		printf("%d\n",c-b);
	}
	else if(a<=c&&d<=b)
	{
		printf("%d\n",d-a);
	}
	else if(a<=c&&d>=b)
	{
		printf("%d\n",b-c);
	}
	return 0;
}