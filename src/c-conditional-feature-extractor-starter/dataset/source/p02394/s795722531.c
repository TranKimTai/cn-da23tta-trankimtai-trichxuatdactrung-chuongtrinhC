#include <stdio.h>
  
int main(int argc, const char * argv[]) {
  int w, h, x, y, r;
  scanf("%d%d%d%d%d", &w, &h, &x, &y, &r);
  if(x + r <= w)
    if(r <= x)
      if(y + r <= h)
        if(r <= y){
          printf("Yes\n");
          return 0;
        }
  printf("No\n");
  return 0;
}