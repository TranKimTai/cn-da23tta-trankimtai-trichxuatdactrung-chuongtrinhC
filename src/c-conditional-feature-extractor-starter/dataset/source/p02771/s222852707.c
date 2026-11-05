#include <stdio.h>
#include <math.h>
#define SWAP(a,b) a=a+b,b=a-b,a=a-b
int main ()
{
	int i,j,m,n,a,b,c;
	scanf ("%d%d%d",&a,&b,&c);
	if (   a==b && b!=c || a==c && b!=c  || c==b && b!=a)
	{
		printf ("Yes");
	}
	else

	{
		printf ("No");
	}
	return 0;
}