#include <stdio.h>
 
int main(void)
{
	int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    
    if(A==B&&A==C&&B==C)
    	printf("No\n");
    else if(A!=B&&A!=C&&B!=C)
      	printf("No\n");
  	else
      	printf("Yes\n");
 
        
    return 0;
}