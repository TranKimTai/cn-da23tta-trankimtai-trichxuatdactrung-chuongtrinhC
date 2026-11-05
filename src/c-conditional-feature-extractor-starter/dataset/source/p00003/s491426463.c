#include<math.h>
int main(void)
{
	int a,b,c,i;
	for(i=1;i<=3;i++) {
		scanf("%d %d %d",&a,&b,&c);
		c=sqrt(a*a+b*b);
		if(c==sqrt(a*a+b*b)) {
			printf("YES\n");
		}
		if(c!=sqrt(a*a+b*b)) {
			printf("NO\n");
		}
	}
	return 0;
}