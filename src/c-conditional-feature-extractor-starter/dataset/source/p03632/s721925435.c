#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d;
	scanf ("%d%d%d%d", &a, &b, &c, &d);
	
	if (b - c > 0) printf ("%d", b - c - a);
	else printf ("0");
	
	return (0);
}