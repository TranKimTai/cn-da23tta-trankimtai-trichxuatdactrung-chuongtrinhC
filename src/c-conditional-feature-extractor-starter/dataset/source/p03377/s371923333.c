#include <stdio.h>
#include <stdlib.h>

int main() {
  int A, B, C;
  scanf("%d %d  %d", &A, &B, &C);
  if (A > C) {
    printf("NO\n");
  } else if (A == C){
    printf("YES\n");
  } else if (A + B >= C){
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}
