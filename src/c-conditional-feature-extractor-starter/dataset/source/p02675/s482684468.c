#include<stdio.h>
int main(){
  int N;
  if(N%10==2)
    printf("hon");
  if(N%10==4)
    printf("hon");
  if(N%10==5)
    printf("hon");
  if(N%10==7)
    printf("hon");
  if(N%10==9)
    printf("hon");
  if(N%10==0)
    printf("pon");
  if(N%10==1)
    printf("pon");
  if(N%10==6)
    printf("pon");
  if(N%10==8)
    printf("pon");
  if(N%10==3)
    printf("bon");
  return 0;
}