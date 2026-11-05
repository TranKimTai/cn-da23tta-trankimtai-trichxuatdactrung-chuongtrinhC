#include <stdio.h>

int
main(int argc, char *argv[])
{
  int a, b, x;
  scanf("%d %d %d", &a, &b, &x);
  
  if(a + b >= x) printf("YES\n");
  else printf("NO\n");
  
  return 0;
}