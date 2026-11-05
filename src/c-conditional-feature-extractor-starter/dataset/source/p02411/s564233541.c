#include<stdio.h>
int main(void){
	int m,f,r,i,n=0,sum[100];
	while(1){
		scanf("%d %d %d",&m,&f,&r);
		if(m+f+r==-3)
			break;
		
		sum[n]=m+f;
		if(sum[n]<50 && r>=50)
			sum[n]=r;
		
		n++;
	}
	for(i=0;i<n;i++){
		if(sum[i]>=80){
			printf("A\n");
		}
		else if(sum[i]>=65){
			printf("B\n");
		}
		else if(sum[i]>=50){
			printf("C\n");
		}
		else if(sum[i]>=30){
			printf("D\n");
		}
		else {
			printf("F\n");
		}
	}
	return 0;
}