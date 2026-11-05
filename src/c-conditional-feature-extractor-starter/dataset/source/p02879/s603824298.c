#include<stdio.h>
int main(void) {
  int A,B;
  scanf("%d",&A);
  scanf("%d",&B);
  if(A<=9) {
    if(B<=9) {
      int C;
      C=A*B;
      printf("%d\n",C);
    }
  }
  else {
    printf("-1");
  }
  return 0;
}