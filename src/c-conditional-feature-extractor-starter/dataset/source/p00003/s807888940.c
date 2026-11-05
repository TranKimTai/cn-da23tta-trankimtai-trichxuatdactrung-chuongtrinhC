#include<stdio.h>
int main(void){
	int kazu,a,b,c,z,i,kotae[1000];
	scanf("%d",&kazu);
	for(z=1;z<=kazu;z++){
		scanf("%d%d%d",&a,&b,&c);
		kotae[z]=0;
		if(a*a==b*b+c*c){
			kotae[z]=1;
			goto a;
		}
		if(a*a+b*b==c*c){
			kotae[z]=1;
			goto a;
		}
		if(a*a+c*c==b*b){
			kotae[z]=1;
			goto a;
		}
		a:;
	}
	for(z=1;z<=kazu;z++){
		if(kotae[z]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
