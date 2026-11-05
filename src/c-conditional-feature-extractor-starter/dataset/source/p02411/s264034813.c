#include <stdio.h>

int m,f,r;

main(){
	while(1){
		scanf("%d %d %d",&m,&f,&r);
		if(m != -1 && f != -1 && r != -1){
			if(m == -1 || f == -1 || m+f <30){
				printf("F\n");
			}else if(m+f >=80){
				printf("A\n");
			}else if(m+f >=65){
				printf("B\n");
			}else if(m+f >=50 || r >=50){
				printf("C\n");
			}else if(m+r >=30){
				printf("D\n");
			}
		}else{
			break;
		}
	}
	return 0;
}
		
	