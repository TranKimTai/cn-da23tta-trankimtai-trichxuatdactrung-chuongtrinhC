#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//関数宣言
//int func(int x, int y);

int main(void){

  //文字列入力
  char str[5];
  scanf("%s", str);

  int num;
  num = atoi(str);

  int fst,snd;

  fst = num/100;
  snd = num%100;

  /* printf("%d %d\n", fst, snd); */

  int YM=0,MY=0;

  if(fst >= 1 && fst <= 12){
    MY=1;
  }
  if(snd >= 1 && snd <= 12){
    YM=1;
  }

  if(MY){
    if(YM){
      printf("AMBIGUOUS\n");
    }else{
      printf("MMYY\n");
    }
  }else{
    if(YM){
      printf("YYMM\n");
    }else{
      printf("NA\n");
    }
  }

  return 0;
}
