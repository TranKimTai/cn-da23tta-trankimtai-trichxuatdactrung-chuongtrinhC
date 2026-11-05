#include <stdio.h>
int main(){
	
	int n;
	scanf("%d", &n);
	int a[n];
	int b[n];
	int c[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d", &a[i], &b[i], &c[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]*a[i]==b[i]*b[i]+c[i]*c[i])
		{
			printf("YES\n");
		}
		else if(b[i]*b[i]==a[i]*a[i]+c[i]*c[i])
		{
			printf("YES\n");
		}
		else if(c[i]*c[i]==a[i]*a[i]+b[i]*b[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}