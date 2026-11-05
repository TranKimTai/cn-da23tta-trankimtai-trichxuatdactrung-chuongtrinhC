#include <stdio.h>

int main(void){

  int A, B, C;

  scanf("%d %d %d", &A, &B, &C );
  if(A==B && A!=C){
    printf("Yes");
  }
  else if(A==C && A!=B){
    printf("Yes");
  }
  else if(B==C && A!=B){
    printf("Yes");
  }
  else printf("No");

  return 0;

}