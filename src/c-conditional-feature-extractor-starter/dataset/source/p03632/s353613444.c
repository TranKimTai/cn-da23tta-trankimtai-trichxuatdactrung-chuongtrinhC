#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(c>=b||a>=d)
		printf("0\n");
		else if(c>=a&&d<=b)
		printf("%d\n",d-c);
		else if(a>=c&&b<=d)
		printf("%d\n",b-a);
		else if(c>=a&&c<=b&&b<=d)
		printf("%d\n",b-c);
		else
		printf("%d\n",d-a);
	}
	return 0;
}
	