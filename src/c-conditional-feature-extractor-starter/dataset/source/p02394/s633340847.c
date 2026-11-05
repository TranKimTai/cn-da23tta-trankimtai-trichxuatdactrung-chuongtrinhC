#include <stdio.h>

int main(void) {
  int w, h, x, y, r;
  
  scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);

  if (x >= r && x <= w - r) {
    if (y >= r && y <= h - r)
      printf("Yes\n");
    else
      printf("No\n");
  }
  else
      printf("No\n");

  return 0;
}
