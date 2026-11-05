#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b;
  scanf("%d",&a,&b );
  if (a>9 || a<1 || b>9 || b<1)
    printf("-1\n");
  else
    printf("%d\n",a*b );
  return 0;
}
