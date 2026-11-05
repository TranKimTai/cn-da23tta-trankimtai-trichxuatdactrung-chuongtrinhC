#include<stdio.h>                                                 
#include<string.h>                                                
int main(void){                                                   
   int K,i;                                                       
   char S[100];                                                   
                                                                  
   scanf("%d",&K);                                                
   scanf("%s",S);                                                 
   int len = strlen(S);                                           
                                                                  
    if(len > K){                                                  
   for(i = 0; i < K; i++){                                        
      printf("%c",S[i]);                                          
   }                                                              
      printf("...");                                              
    }else{                                                        
    printf("%s",S);                                               
    }                                                             
   return 0;                                                      
}       