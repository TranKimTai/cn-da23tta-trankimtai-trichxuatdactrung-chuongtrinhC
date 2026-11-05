#include <stdio.h>

int main() {
  int A, B, C, D;
  int time = 0;
  int sw = 0;
  
  scanf("%d %d %d %d", &A, &B, &C, &D);
  for(int i = 0; i < 100; i++) {
    if(i == A) sw += 1;
    if(i == C) sw += 1;
    if(i == B) sw -= 1;
    if(i == D) sw -= 1;
    if(sw == 2) time++;
  }
  
  printf("%d\n", time);
  
  return 0;
}