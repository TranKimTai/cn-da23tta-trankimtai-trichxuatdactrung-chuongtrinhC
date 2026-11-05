#include<stdio.h>
int main()
{
	int a[3],i,t;
	for(i=0;i<=3;i++)
	scanf("%d",&a[i]);
	if(a[0]<=a[2])
	{
		if(a[1]<=a[2])
		t=0;
		else if(a[1]>=a[3])
		t=a[3]-a[2];
		else
		t=a[1]-a[2];
	}
	else
	{
		if(a[3]<=a[0])
		t=0;
		else if(a[3]>=a[1])
		t=a[1]-a[0];
		else
		t=a[3]-a[0];
	}
	printf("%d",t);
	return 0;
	
}