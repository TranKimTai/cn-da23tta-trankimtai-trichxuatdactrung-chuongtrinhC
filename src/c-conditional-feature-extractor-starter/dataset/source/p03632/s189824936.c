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
		if(a>d||c>b)
		h=0;
		else if(a==d||c==b)
		h=1;
		else if(b>c&&c>a)
		h=b-c;
		else if(a<d&&a>c)
		h=d-a;
		else if(b>c&&a>c&&a<d&&b<d)
		h=b-a;
		else if(c>a&&d>a&&c<b&&d<b)
		h=d-c;
		printf("%d\n",h);
	}
	return 0;
}