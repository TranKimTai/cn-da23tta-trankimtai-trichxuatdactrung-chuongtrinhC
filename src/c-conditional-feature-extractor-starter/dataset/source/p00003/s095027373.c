#include <stdio.h>
int main(void)
{
	int a, i;
	int x,y,z;
	int j,k,l;
	scanf("%d", &a);
	for (i=0;i<a;i++)
	{
		scanf("%d%d%d", &x, &y, &z);
		j=x*x+y*y;
		k=x*x+z*z;
		l=y*y+z*z;

		if (j==z*z || k==y*y || l==x*x)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");

	}
	return 0;
}