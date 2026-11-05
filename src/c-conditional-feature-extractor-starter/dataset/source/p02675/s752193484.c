#include <stdio.h>
 
int main(){
	int n,i,p;
  	scanf("%d\n", &n);
  	p = n%10;
  	if(p== 2 || p == 4 || p==5|| p==7 || p==9)
    {
    	printf("hon\n");
    }
  	if(p== 1 || p == 0 || p==6|| p==8)
    {
    	printf("pon\n");
    }
  	else{
    printf("bon\n");
    }
  
 
}