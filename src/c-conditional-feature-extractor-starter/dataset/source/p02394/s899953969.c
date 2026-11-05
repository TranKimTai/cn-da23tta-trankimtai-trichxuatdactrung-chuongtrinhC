#include <stdio.h>

int main(void){

  int w,h,x,y,r;

  scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);

  if((x+r)>w || (y+r)>h){
    puts("No");
  }else{
    puts("Yes");
  }

  return 0;
}