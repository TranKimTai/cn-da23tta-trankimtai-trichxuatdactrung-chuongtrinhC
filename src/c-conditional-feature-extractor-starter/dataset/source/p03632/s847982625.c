#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>=d)
	printf("0\n");
	if(d>a>=c&&b<=d)
	printf("%d\n",b-a);
	if(d>a>=c&&b>d)
	printf("%d\n",d-a);
	if(b<c)
	printf("0\n");
	if(a<c&&c<b<d)
	printf("%d\n",b-c);
	if(a<c&&b>=d)
	{
		printf("%d\n",d-c);
	}
	return 0;
}