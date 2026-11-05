#include <stdio.h>
#define num3 3

int main(void){
  int num[num3];
  int equal=0;
  for(int i = 0;i < num3;i++){
    scanf("%d ",&num[i]);
  }
  for(int i = 0;i < num3;i++){
    if(num[i%num3]==num[(i+1)%num3]){
       equal++;
    }
  }
  if(equal == 1){
    printf("\nYes");
  }
  else{
    printf("\nNo");
  }
  return 0;
}
