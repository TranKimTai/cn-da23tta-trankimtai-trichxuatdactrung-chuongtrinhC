#include <stdio.h>

int main(void) {

  int x;
  
    scanf("%d", &x);

  int n[2];
  n[0] = x % 100;
  n[1] = (x - n[0]) / 100;

  if (n[0] <= 12 && n[0] >= 1) {
    if (n[1] > 12 || n[1] < 1) {
      printf("YYMM\n");
    } else {
      printf("AMBIGUOUS\n");
    }
  } else {
    if (n[1] <= 12 && n[1] >= 1) {
      printf("MMYY\n");
    } else {
      printf("NA\n");
    }
  }

  return 0;
}