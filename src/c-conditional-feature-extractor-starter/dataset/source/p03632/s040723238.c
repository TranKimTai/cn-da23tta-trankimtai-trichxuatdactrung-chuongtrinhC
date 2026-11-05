#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(~scanf("%d%d%d%d",&a,&b,&c,&d))
	{
		if(b-c<=0) printf("0\n");
		else printf("%d\n",b-c-a);
	}
}