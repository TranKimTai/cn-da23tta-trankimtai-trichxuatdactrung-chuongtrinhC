#include<stdio.h>
#include<math.h>
int main(){
	int n,a,b,c,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&a,&b,&c);
		if(sqrt(a*a+b*b)==c||sqrt(a*a+c*c)==b||sqrt(c*c+b*b)==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}