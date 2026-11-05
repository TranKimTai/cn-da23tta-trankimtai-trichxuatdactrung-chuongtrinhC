#include <stdio.h>

int main() {
  int cat, unknown, number_x;
  scanf("%d %d %d", &cat, &unknown, &number_x);
  if(number_x - cat <= unknown) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
