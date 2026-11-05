#include<stdio.h>

int main(void){
  
  int s1,s2,s3;
  scanf("%d %d %d",&s1,&s2,&s3);
  
  if (s1==s2){
    if(s2==s3){
      printf("No");
    }
    else{
      printf("Yes");
    }
  }
  
  else if(s1==s3){
   	if(s2==s3){
    	printf("No");
    }
    else{
      printf("Yes");
    }
  }
  
    else if(s2==s3){
   	if(s1==s2){
    	printf("No");
    }
    else{
      printf("Yes");
    }
  }
  
  else{
	printf("No");
    
  }
  
  return 0;
  
}