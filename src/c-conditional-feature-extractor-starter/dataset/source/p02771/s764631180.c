#include <stdio.h>

int main()
{
  int a, b, c;
  
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  
  if (a == b) {
    if (c != a) {
      printf("Yes");
    }
  } else if (b == c) {
    if (a != b) {
      printf("Yes");
    }
  } else if (a == c) {
    if (b != a) {
      printf("Yes");
    }
  } else {
    printf("No");
  }
  
  return 0;
}