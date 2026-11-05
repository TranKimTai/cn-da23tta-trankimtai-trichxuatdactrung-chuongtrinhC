#include<stdio.h>
main(){
  int a,b = 0;
  scanf("%d %d",&a,&b);
  if(a>b){
    printf("a > b\n");
  }
  else if(a<b){
    printf("a < b\n");
  }
  else{
    printf("a == b\n");
  }
  return 0;
}