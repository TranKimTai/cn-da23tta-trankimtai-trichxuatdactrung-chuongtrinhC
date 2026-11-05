#include <stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) 
	{
		int need=0;
		scanf("%d",&need);
		int circle=need/7+1;
		int flag=0;
		for(int j=0;j<circle;j++)
		{
			if((need-j*7)%3==0) 
			{
				flag=1;
				break;
			}
		}
		if(flag) printf("YES\n");
		else printf("NO\n");
	}
}