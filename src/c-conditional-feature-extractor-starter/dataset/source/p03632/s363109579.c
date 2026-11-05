#include<stdio.h>
int main()
{
	int a,b,c,d,h;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
	{
		if(b<a)
		{
			h=a;
			a=b;
			b=h;
		}
		if(d<c)
		{
			h=c;
			c=b;
			b=h;
		}
		if((a<b&&b<=c&&c<d)||(c<d&&d<=a&&a<b))
		h=0;
		else if(a<c&&c<b&&b<d)
		h=b-c;
		else if(a<=c&&c<d&&d<=b)
		h=d-c;
		else if(c<a&&a<b&&b<d)
		h=b-a;
		else if(c<=a&&a<d&&d<=b)
		h=d-a;
		printf("%d\n",h);
	}
	return 0;
}