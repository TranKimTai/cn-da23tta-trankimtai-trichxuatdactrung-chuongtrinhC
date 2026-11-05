#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int A,B,X;
  char str[100],*p;
  
  fgets(str,sizeof(str),stdin);
  p=strtok(str," \n");
  A=atoi(p);
  p=strtok(NULL," \n");
  B=atoi(p);
  p=strtok(NULL," \n");
  X=atoi(p);
  
  if(X<=A+B && X>=A){
   printf("YES\n");
    return 0;
  }else{
   printf("NO\n");
    return 0;
  }
  
  
  return 0;
}