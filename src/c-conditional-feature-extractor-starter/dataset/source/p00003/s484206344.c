#include <stdio.h>

int main(void){
	int a,b,c,j,t;
	while(scanf("%d %d %d",&a,&b,&c)==3){
		if(a<b) t=a, a=b, b=t;
		if(b<c) t=c, c=b, b=t;
		if(a<b) t=a, a=b, b=t;
		if(c*c!=b*b+a*a) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}