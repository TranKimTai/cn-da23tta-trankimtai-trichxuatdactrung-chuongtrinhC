//ITP1_7_A

#include <stdio.h>

int main(){

	int m,f,r;
	
	while(1){
	
		scanf("%d %d %d",&m,&f,&r);
		
		//??????
		if(m+f>80){printf("A\n");}
		else if(m+f>=65){printf("B\n");}
		else if(m+f>=50){printf("C\n");}
		else if(m+f>=30&&r>=50){printf("C\n");}
		else if(m+f>=30){printf("D\n");}
		else{printf("F\n");}
		
		
		if(m==-1&&f==-1&&r==-1){break;}
	}
	
	return 0;

}