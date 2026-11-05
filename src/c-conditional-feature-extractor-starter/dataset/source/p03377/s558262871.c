#include<stdio.h>
main()
{
	int a, b, x;
	scanf("%d%d%d",  &a, &b, &x);
	if (a+b>=x)
	printf("YES");
	else
	printf("NO");
	return 0;
}