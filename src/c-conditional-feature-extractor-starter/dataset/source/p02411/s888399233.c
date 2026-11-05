#include <stdio.h>

int main(){
	
	int m[1000],f[1000],r[1000];
	
	int i=0;
	
	while(1){
		
		if(i!=0)
		
			scanf("%*c");
		
		scanf("%d %d %d",&m[i],&f[i],&r[i]);
		
		if(m[i]==-1&&f[i]==-1&&r[i]==-1)
			
			break;
		
		i++;
	}
	
int t;

	for(t=0;t<=i-1;t++){
		
		
		if(m[t]==-1&&f[t]==-1){
			
			printf("F\n");
			
		}
		
		else if(m[t]+f[t]>=80){
			
			printf("A\n");
			
		}
		
		else if(m[t]+f[t]>=65){
			
			printf("B\n");
			
		}
		
		else if(m[t]+f[t]>=50){
			
			printf("C\n");
			
		}
		
		else if(m[t]+f[t]>=30&&r[t]>=50){
			
			printf("C\n");
			
		}
		
		else if(m[t]+f[t]>=30){
			
			printf("D\n");
			
		}
		
		else{
			
			printf("F\n");
			
		}
		
	}
	
	return 0;
}