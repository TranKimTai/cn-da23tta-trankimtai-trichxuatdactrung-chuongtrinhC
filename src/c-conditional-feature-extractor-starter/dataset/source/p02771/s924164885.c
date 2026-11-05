#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int k=1;
	if(a==b&&b==c)
	k=0;
	if(a!=b&&b!=c&&c!=a)
	k=0; 
	if(k==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
