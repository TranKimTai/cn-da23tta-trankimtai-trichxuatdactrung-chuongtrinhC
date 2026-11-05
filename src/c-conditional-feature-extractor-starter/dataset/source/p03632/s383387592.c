#include <stdio.h>

int main() {
  int bottom, top, i, count = 0;
  int time[100] = {};
  scanf("%d %d", &bottom, &top);
  for(i = bottom; i < top; i++) {
    time[i]++;
  }
  scanf("%d %d", &bottom, &top);
  for(i = bottom; i < top; i++) {
    time[i]++;
  }
  for(i = 0; i < 100; i++) {
    if(time[i] == 2) {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
