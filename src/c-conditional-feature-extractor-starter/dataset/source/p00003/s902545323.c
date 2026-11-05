#include<stdio.h>

int main(){
	int N,i;
	double a,b,c,d,obliqueline,baseline,height;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d %lf",&baseline,&height,&obliqueline);
		a=pow(baseline,2);
		b=pow(height,2);
		d=pow(obliqueline,2);
		c=sqrt(a+b);
		if(c==obliqueline){
			printf("YES\n");
		}
		else if((c=sqrt(a+d))==height){
			printf("YES\n");
		}
		else if((c=sqrt(b+d))==baseline){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}