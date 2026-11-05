#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);	
	if(b>=d&&c<b&&a<c) printf("%d\n",d-c);
	else if(b>=d&&c<b&&a>c) printf("%d\n",d-a);
	else if(b<=d&&a<c&&c<b) printf("%d\n",b-c);
	else if(b>=d&&a>=c&&c<b) printf("%d\n",b-a);
	else printf("0\n");
	return 0;
}