#include <stdio.h>

int main() {
  int a[2];
  int s;
  int i;
  scanf("%d", &s);

  for (i = 1; i >= 0; i--) {
    a[i] = s % 100;
    s /= 100;
  }
  if (a[0] > 12 && a[1] > 0 && a[1] < 13) {
    printf("YYMM\n");
  } else if (a[0] > 0 && a[0] <= 12 && a[1] > 12) {
    printf("MMYY\n");
  } else if (a[0] <= 12 && a[0] > 0 && a[1] > 0) {
    printf("AMBIGUOUS\n");
  } else {
    printf("NA\n");
  }

  return 0;
}
