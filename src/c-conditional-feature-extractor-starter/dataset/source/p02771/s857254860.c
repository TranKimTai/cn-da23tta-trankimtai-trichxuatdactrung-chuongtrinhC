#include <stdio.h>

int main(void) {
  int A;
  int B;
  int C;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  if (A == B && B == C && C == A) {
    printf("No\n");
  } else {
    printf("Yes\n");
  }
  return 0;
}