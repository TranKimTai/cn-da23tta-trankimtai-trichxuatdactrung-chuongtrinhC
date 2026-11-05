#include<stdio.h>

int main(void)
{
	int W,H,x,y,r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

	if(x+r<W&&r<x&&y+r<H&&r<y)
	printf("Yes\n");

	else printf("No\n");
	
return 0;
}