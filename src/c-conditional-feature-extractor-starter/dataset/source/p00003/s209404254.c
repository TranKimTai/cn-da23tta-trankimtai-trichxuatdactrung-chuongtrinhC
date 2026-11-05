#include<stdio.h>

int main()
{
	int a,b,c,d,i,j;
	scanf("%d\n",&d);
	for(i=0;i<d;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a<b){
			j=a;
			a=b;
			b=j;
		}
		if(a<c){
			j=a;
			a=c;
			c=j;
		}
		if(a*a==b*b+c*c)
		    printf("YES\n");
		else
		    printf("NO\n");
	}
	return 0;
}