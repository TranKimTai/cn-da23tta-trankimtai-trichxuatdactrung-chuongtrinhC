#include <stdio.h>

int main(void) {
  int A;
  int B;
  int C;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  if (A == B || B == C || C == A) {
    if (A != B || B != C || C != A) {
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
  return 0;
}