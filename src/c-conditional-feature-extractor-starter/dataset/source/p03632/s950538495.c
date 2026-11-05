#include<stdio.h>
int main(void)
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((b < c)||(d<a))printf("0");
	if ((b > d)&&(c>a))printf("%d", d - c);
	if (a > c)
	{
		if (d > a)
		{
			if (b > d)printf("%d", d-a);
		}
	}
	if ((d > b)&&(a>c))printf("%d",b - a);
	if (b > c) {
		if (d > b) { if (c > a)printf("%d", b - c); }
	}
}