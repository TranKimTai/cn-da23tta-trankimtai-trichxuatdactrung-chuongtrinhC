#include <stdio.h>

int main(void){
  int a, b, x;
  scanf("%d %d %d", &a, &b, &x);
  int sub1 = x - a;
  int sub2 = b - sub1;
  if(sub1 >= 0 && sub2 >= 0) printf("YES\n");
  else printf("NO\n");
  return 0;
}