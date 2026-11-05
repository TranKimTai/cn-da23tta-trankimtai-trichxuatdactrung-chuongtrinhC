#include<stdio.h>
int main()
{
	int a,b,c,d,max;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(a>=d||b<=c)
		printf("0\n");
		else if(a<=c&&b>=c&&b<=d)
		printf("%d\n",b-c);
		else if(a<=c&&b>=d)
		printf("%d\n",d-c);
		else if(c<=a&&d>=a&&b>=d)
		printf("%d\n",d-a);
		else if(c<=a&&d>=b)
		printf("%d\n",b-a);
	}
	return 0;
}