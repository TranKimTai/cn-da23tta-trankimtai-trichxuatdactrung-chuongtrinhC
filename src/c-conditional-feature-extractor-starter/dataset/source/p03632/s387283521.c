#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(c>b)
	printf("0\n");
	if(c<=b)
	{
		if(a>c)
		{
			if(d>a)
			{
			    if(b>d)
			    printf("%d\n",d-a);
			    else
			    printf("%d\n",b-a);
		    }
		    if(d<=a)
		    printf("0\n");
		}
		if(a<=c)
		{
			if(d>b)
			printf("%d\n",b-c);
			else
			printf("%d\n",d-c);
		}
	}
	return 0;
}