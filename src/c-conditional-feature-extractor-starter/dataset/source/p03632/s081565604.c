#include<stdio.h>
int main()
{
	int a,b,c,d,time;
	scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a<c&&b>c&&b<d)
	    time=b-c;
		else if(a<c&&b>d)
		time=d-c;
		else if(a>c&&b<d)
		time=b-a;
		else if(a>c&&b>d&&a<d)
		time=d-a;
		else if(b<=c||d<=a)
		time=0;
		printf("%d\n",time);
	return 0;
}