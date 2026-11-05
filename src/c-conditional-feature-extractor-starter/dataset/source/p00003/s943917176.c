#include <stdio.h>
#include <math.h>

int main()
{
    int j,i,n,m=0,s,a[3];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&a[j]);
			if (m<a[j])
				m=a[j];
		}
		s=a[0]*a[0]+a[1]*a[1]+a[2]*a[2];
		if (s==2*m*m)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}