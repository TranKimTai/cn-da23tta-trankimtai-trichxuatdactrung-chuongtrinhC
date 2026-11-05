#include<stdio.h>

int main(void)
{
	int n, a, b, c;
	
	scanf( "%d", &n );
	for( ; n>0; n-- ) {
		scanf( "%d %d %d", &a, &b, &c );
		if( a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			printf( "YES\n" );
		else
			printf( "NO\n" );
	}
	return 0;
}