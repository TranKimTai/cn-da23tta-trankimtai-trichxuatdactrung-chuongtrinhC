#include<stdio.h>
int main(void)
{
	int n;
    int a = 0;
	scanf("%d",&n);
    a = n % 10;
    if (a==3)printf("bon");
	else if (a == 0 || a == 1 || a == 6 || a == 8)printf("pon");
	else printf("hon");
	return 0;
}