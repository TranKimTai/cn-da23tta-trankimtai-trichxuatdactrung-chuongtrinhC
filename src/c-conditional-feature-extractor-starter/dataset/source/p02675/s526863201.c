#include<stdio.h>

int main(){
  int num;
  scanf("%d",&num);
  num=num/10;
  if(num==2||num==4||num==5||num==7||num==9){
    printf("hon\n");
  }
  else if (num==0||num==1||num==6||num==8){
    printf("pon\n");
  }
  else {
      printf("bon\n");
    }
  return 0;
}
