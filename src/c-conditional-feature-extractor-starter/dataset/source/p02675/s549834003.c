#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  
  if(n%10 == 2 && 4 && 5 && 7 && 9){
    printf("hon");
    }else if(n%10 == 0 && 1 && 6 && 8){
    printf("pon");
  }else{
    printf("bon");
  }
  return 0;
};
