/* kadai3_2
   reo012 */

#include<stdio.h>

int main(void){
  int num, ones;
  // 何本であるか取得
  scanf("%d", &num);

  // numの一の位(ones)を求める
  ones = num%10;

  //一の位ごとにhon/pon/bonを出力
  switch(ones){
    case 2: case 4: case 5: case 7: case 9:
      printf("hon\n"); break;
    case 0: case 1: case 6: case 8:
      printf("pon\n"); break;
    case 3:
      printf("bon\n"); break;
    default:
      break;
  }
  return 0;
}
