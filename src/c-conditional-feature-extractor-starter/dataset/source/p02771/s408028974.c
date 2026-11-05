#include<stdio.h>
int main()
{
  int A,B,C;
  scanf("%d %d %d",&A,&B,&C);
  if(A==B){
    if(C==B){
      printf("No");
    }
    else{
      printf("Yes");
    }
  }
  else if(C==B){
    if(A==B){
      printf("No");
    }
    else{
      printf("Yes");
    }
  }
  else if(C==A){
    if(A==B){
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
  
  
  