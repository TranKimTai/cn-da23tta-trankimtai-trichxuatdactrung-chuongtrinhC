/*Kadai3_2
  saitomo*/

#include<stdio.h>

int main(void){
  int num,first_num;
  scanf("%d",&num);
  first_num = num%10;//1の位を求める
  if(first_num==3){//問題文の通りに条件分岐
    printf("bon\n");
  }else if(first_num==0 || first_num==1 || first_num==6 || first_num==8){
    printf("pon\n");
  }else{
    printf("hon\n");
  }
  return 0;
}
