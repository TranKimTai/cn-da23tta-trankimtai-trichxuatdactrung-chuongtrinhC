#include<stdio.h>


int main(void){
	int m,f,r,pls,i;
	m=0;
	f=0;
	r=0;
	
	while(1){
		scanf("%d %d %d",&m,&f,&r);
		pls=m+f;
		if(m==-1 && f==-1 && r==-1){
			return 0;
		}else if("m<0 || f<0"){
			printf("F\n");
		}else if("pls>=80"){
			printf("A\n");
		}else if(pls<80 && pls>=65){
			printf("B\n");
		}else if(pls<65 && pls>=50 || pls<50 && pls>=30 && r>=50){
			printf("C\n");
		}else if(pls<50 && pls>=30 && r<50){
			printf("D\n");
		}else {
			printf("F\n");
		}
	}
}