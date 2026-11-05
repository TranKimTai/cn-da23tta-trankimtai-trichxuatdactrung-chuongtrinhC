#include<stdio.h>
int main()
{
	int a,b,c,d,n=0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(int i=0;i<=100;i++)
	  if(i>a&&i<=b&&i>c&&i<=d)
	    n++;
	printf("%d",n);
	return 0;
}