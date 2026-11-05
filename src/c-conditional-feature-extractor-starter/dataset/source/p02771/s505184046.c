#include <stdio.h>
 
int main(void) {
  int A,B,C;
  int f = 1;
  
 while(f == 1){
    scanf("%d %d %d", &A, &B, &C);
    if((1 >= A <= 9 )&&(1 >= B <=9)&&(1 >= C <=9))
      f = 0;
  }
  int i = 0;
  if (A == B && B != C) 
    i = 1;
  if (B == C && A != C)
    i = 1;
  if (A == C && A != B)
    i = 1;
  
  if (i) {
    puts("Yes");
  } else {
    puts("No");
  }
  return 0;
}