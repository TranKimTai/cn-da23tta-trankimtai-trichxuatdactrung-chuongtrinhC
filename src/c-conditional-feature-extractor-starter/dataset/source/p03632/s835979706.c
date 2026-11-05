#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);

	
	printf("%d\n",
					b<=c ? 0
					:b<d ? b-c
						 : d-c);
	return 0;
}