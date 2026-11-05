#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
 
int main(int argc, char const *argv[])
{
	int n;
	int l,r;

	scanf("%d",&n);
	l = n / 100;
	r = n % 100;

	if( 1 <= l && l <= 12 )
	{
		if( 1 <= r && r <= 12 )
			puts("AMBIGUOUS");
		else
			puts("MMYY");
	}
	else{
		if( 1 <= r && r <= 12 )
			puts("YYMM");
		else
			puts("NA");
	}

	return 0;
}