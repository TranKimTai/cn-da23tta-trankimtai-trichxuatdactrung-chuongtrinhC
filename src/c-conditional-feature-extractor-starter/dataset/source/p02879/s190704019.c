#include <stdio.h>
int main()
{
  int a, b, c;
  if(scanf("%d", &a)== 1);
  if(scanf("%d", &b)== 1);

  if (a <= 9 && b <= 9)
  {
  c = a * b;
  printf("%d\n", c < 81  ? c : -1);
  }else{
  printf("-1");

  }
  return 0;
}