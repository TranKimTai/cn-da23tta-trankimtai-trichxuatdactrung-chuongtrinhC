#include <stdio.h>

int main(){
  int n, s;
  scanf("%d", &n);
  while(n/10>0){
    n = n/10;
  }
  s = n;
  if(s==2 || s==4 || s==5 || s==7 || s==9){
    printf("hon\n");
  }else if(s==0 || s==1 || s==6 || s==8){
    printf("pon\n");
  }else{
    printf("bon\n");
  }
  
  
  return 0;
}