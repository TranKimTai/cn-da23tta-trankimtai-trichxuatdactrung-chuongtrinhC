#include<stdio.h>
int main()
{	int a,b,c,d,s,st,de;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<c) st=c;
		else st=a;
		if(b>d) de=d;
		else de=b;
		s=de-st;
	if(s<0)
		s=0;
	printf("%d\n",s);
	return 0;
}