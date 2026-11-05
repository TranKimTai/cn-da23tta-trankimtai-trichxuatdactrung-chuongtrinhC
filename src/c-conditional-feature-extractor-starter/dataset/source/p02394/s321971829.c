#include<stdio.h>
int main() {
  int W, H, x, y, r;
  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
  if(x-r < 0 || W < x+r){
    printf("No\n");
  }
  else if(y-r < 0 || H < y+r){
    printf("No\n");
  }
  else{
    printf("Yse\n");
  }
  return 0;
}