#include<stdio.h> 
#include<stdlib.h>



int main ()  {
	char s[50];
	int n ;
	scanf("%s",s) ;
	n=atoi(s) ;
	
	if (n%100 <=12 && n/100 <=12 && n%100 >0 && n/100 >0) {
		printf("AMBIGUOUS") ;
	}
	else if (n%100 <=12 && n%100 >0){
		printf("YYMM") ;
	}
	else if (n/100 <=12 && n/100 >0) {
		printf("MMYY") ;
	}
	else 
	printf("NA") ;
	
	return(0) ;
}