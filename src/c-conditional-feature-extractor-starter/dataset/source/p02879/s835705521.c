#include "stdio.h"

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  if(a <= 9 && 1 <= a && 2 <= b && b <= 9)
  {
    printf("%d", a * b);
    return 0;
  }
  else
  {
    printf("-1");
    return 0;
  }
}
