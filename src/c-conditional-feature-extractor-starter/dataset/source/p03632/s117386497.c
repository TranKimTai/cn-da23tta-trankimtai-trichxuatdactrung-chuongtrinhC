
#include <stdio.h>

int MAX(int a, int b){
  if(a < b) return b;
  else return a;
}

int main(void){
  int A, B, C, D;
  int max, min;

  fscanf(stdin, "%d %d %d %d", &A, &B, &C, &D);

  if(B < C || D < A) printf("0\n");
  else{
    max = MAX(-1*B, -1*D) * -1;
    min = MAX(A, C);

    printf("%d\n", max-min);
  }
  return 0;
}
