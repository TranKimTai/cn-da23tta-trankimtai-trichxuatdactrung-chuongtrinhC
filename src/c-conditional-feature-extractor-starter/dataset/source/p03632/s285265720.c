#include <stdio.h>
int main ()
{
	int n,i,j,k,t,a,b,c,d;
	scanf ("%d%d%d%d",&a,&b,&c,&d);
	if (a>=d||c>=b)
	{
		printf ("0\n");
	}
	else {
		     if ((a>=c&&b<d)||(a>c&&b<=d))
	        {
	        	  	printf ("%d\n",b-a);
	        }
	        if ((a<=c&&b>d)||(a<c&&b>=d))
	        {
	        	printf ("%d\n",d-b);
	        }
	        if ((a<=c&&b<d)||(a<c&&b<=d))
	        {
	        	printf ("%d\n",b-c);
	        }
	        if (a>=c&&b>=d)
	        {
	        	printf ("%d\n",d-a);
	        }
	}
	  return 0;
}
	