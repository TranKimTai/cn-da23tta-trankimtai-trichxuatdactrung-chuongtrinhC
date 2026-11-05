#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323

//void quick(int *,long long,long long);
//int comp(char *a,char *b);

int main(){
	
	int n,a,b,c,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if( (a>b && a>c && a*a==b*b+c*c) || (b>a && b>c && b*b==a*a+c*c) || (c>a && c>b && c*c==a*a+b*b) )
			printf("YES\n");
		else
			printf("NO\n");
	}
	//for(i=0;i<=10000000000;i++);
	return 0;
}