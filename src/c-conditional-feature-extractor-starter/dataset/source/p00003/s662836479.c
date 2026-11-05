#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	int a,b,c,i;
	scanf("%d",&n);

	for(i=1; i<=n; i++) {
		scanf("%d %d %d",&a,&b,&c);
		a<=1000; b<=1000; c<=1000;
		c=sqrt(a*a+b*b);
		if(c=sqrt(a*a+b*b)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
		
	return 0;
}