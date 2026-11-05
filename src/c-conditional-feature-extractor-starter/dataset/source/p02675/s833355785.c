#include <stdio.h>

void kazu(int n){
  int i=n%10;
  printf("%d\n",i);
  if(i==2||i==4||i==5||i==7||i==9){
    printf("hon\n");
  }
  else if(i==0||i==1||i==6||i==8){
    printf("pon\n");
  }
  else if(i==3){
    printf("bon\n");
  }
}

int main(void){
  int N;
  scanf("%d",&N);
  kazu(N);
  return 0 ;
}
