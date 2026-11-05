#include<stdio.h>
int main()
{
	int a,b,c,d,i,j,n,m,sum;
	sum=0;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if((a<b&&b<=c&&c<d)||(c<d&&d<=a&&a<b))
		{sum=0;}
		if(a<=c&&c<=b&&b<=d)
		{sum=b-c;}
		if(a<=c&&c<=d&&d<=b)
		{sum=d-c;}
		if(c<=a&&a<=d&&d<=b)
		{sum=d-a;}
		if(c<=a&&a<=b&&b<=d)
		{sum=b-a;}
		printf("%d\n",sum);
	}
	return 0;
}