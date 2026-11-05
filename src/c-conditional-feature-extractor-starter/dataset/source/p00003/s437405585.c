#include<stdio.h>
int main()
{
	int N,a,b,c;
    scanf("%d",&N);
	while (scanf("%d %d %d",&a,&b,&c)==3)
	{
		if(a+b>c&&a+c>b&&b+c>a&&a-b<c&&a-c<b&&b-c<a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}