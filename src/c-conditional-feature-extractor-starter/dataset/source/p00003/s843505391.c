#include<stdio.h>
 
int main(void){
	int a,b,c,n,s;
	scanf("%d",&n);
	for (s=0;s<n;s++){
		scanf("%d %d %d",&a,&b,&c);
		if(a>b&&a>c){
			if(a*a==b*b+c*c){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else if(b>a&&b>c){
			if(b*b==a*a+c*c){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else if(c>a&&c>b){
			if(c*c==a*a+b*b){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}