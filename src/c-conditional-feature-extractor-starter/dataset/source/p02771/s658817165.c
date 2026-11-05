#include<stdio.h>
int main()
{
    int a[3],i,j=0;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	
	for(i=1; i<3; i++){
		if(a[0]==a[i]){
			j++;
		}
	}

		if(a[1]==a[2]){
			j++;
		}
		
	if(j==1){
		printf("YES\n");
		return 0;
	}
		
		else{
			
		printf("NO\n");
		return 0;
	}
			
}