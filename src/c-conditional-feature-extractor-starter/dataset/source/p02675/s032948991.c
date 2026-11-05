#include<stdio.h>

int main(){
  int n;
  int tmp;

  scanf("%d",&n);
  tmp=n%10;
  if(tmp==3){
    printf("bon\n");
  }else if(tmp==0 || tmp==1 || tmp==6 || tmp==8){
    printf("pon\n");
  }else{
    printf("hon\n");
  }
  return 0;
}
