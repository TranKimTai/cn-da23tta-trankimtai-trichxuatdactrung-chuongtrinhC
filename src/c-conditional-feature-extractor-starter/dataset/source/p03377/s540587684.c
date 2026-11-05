#include<stdio.h>

int main(void){
	int a,b,c,d;
	
	scanf("%d %d %d",&a,&b,&c);
	
	d=c-a;
	if(d>=0)d=b-d;
	if(d>=0)printf("YES");
	else printf("NO");
	
return(0);
}