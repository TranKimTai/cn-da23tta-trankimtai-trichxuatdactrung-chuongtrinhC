#include <stdio.h>

int main(void){
 int A,B,C;
  
  scanf("%d %d %d",&A,&B,&C);
  
  if(A==B&&B==C){
    printf("No");
  }else if(A!=B&&B!=C){
    printf("No");
  }else printf("Yes");
  
  return 0;
}
