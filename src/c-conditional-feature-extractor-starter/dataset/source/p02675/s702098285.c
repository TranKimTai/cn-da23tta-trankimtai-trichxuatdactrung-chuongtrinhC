#include <stdio.h> 
#include<math.h>
char S[200];

 int main(){
		double A, B, H, M;
		double angle;
		double pi =acos(-1);
		double V=180;
		scanf("%lf%lf%lf%lf",&A,&B,&H,&M);
		angle=fabs(H*30-M*6);
		if(angle>180)
		angle=360-angle;
		angle=angle/V;
		
		double lenth;
		lenth=A*A+B*B-2*A*B*cos(angle*pi);
		lenth=sqrt(lenth);
		printf("%.10f",lenth);
		
		
		      
 }