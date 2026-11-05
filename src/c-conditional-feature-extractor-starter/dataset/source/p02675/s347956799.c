#include<stdio.h>

int main(void)
{
  //宣言
  int N;
  //読み込み
  scanf("%d",&N);
  //結果
  if(N%10==2||N%10==4||N%10==5||N%10==7||N%10==9)
  {
  	printf("hon");
  }else if(N%10==0||N%10==1||N%10==6||N%10==8){
    printf("pon");
  }else{
  	printf("bon");
  }
  
  return 0;

}