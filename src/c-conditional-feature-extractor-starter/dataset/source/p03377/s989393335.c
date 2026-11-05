#include <stdio.h>

int main(void){
  
  int A;
  int B;
  int X;
  
  scanf("%d %d %d",&A,&B,&X);
  
  if(A > X || A + B < X){
    puts("NO");
  }
  else{
    puts("YES");
  }
  
  
  return 0;
}
  
