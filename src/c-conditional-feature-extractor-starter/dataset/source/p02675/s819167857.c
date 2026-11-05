#include<stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  if(n>=100)
    n=n%100;
  else if(n>=10)
    n=n%10;
  if(n==3)
    printf("bon");
  else if(n==0||n==1)
    printf("pon");
  else if(n==6||n==8)
    printf("pon");
  else
    printf("hon");
  return 0;
}