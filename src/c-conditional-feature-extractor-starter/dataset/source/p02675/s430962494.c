/* ex3_2
   offNaria */
#include <stdio.h>
int main(void){
  int input; //整数inputを定義
  scanf("%d", &input); //入力を変数に代入
  
  input = input % 10; //inputの1の位のみを取得
  if(input == 3){
    printf("bon\n"); //3はbon
  } else if(input == 0 || input == 1 || input == 6 || input == 8){
    printf("pon\n"); //0,1,6,8はpon
  } else {
    printf("hon\n"); //それ以外はhon
  }
  return 0;
}
