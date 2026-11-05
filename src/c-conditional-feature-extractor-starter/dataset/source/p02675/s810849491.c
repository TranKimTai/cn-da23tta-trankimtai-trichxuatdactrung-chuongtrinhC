#include<stdio.h>

int main(void){
  int i;

  scanf("%d", &i);
  if (i % 10 == 2 || i % 10 == 4 || i % 10 == 5 || i % 10 == 7 || i % 10 == 9){
    printf("hon");
  }else if(i % 10 == 0 || i % 10 == 1 || i % 10 == 6 || i % 10 == 9){
    printf("pon");
  }else{
    printf("bon");
  }

  return 0;
}
