#include<stdio.h>
int main()
{
	int a[4];
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>=a[3]||a[1]<=a[2])
	{
		printf("0");
	}
	else if(a[0]>=a[2]&&a[1]>=a[3])
	{
		 printf("%d",a[3]-a[0]);
	}
	else if(a[0]>=a[2]&&a[1]<a[3])
	{
		printf("%d",a[1]-a[0]);
	}
	else if(a[0]<a[2]&&a[3]<=a[1])
	{
		printf("%d",a[3]-a[2]);
	}
	else if(a[0]<a[2]&&a[3]>a[1])
	{
		printf("%d",a[1]-a[2]);
	}
	return 0;
}