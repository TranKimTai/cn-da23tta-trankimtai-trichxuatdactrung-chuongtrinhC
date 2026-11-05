#include <stdio.h>
int main(void)
{

  int n;
  int m;

  scanf("%d", &n);

  m = n % 10;

  if (m == 0) printf("pon\n");
  if (m == 1) printf("pon\n");
  if (m == 6) printf("pon\n");
  if (m == 8) printf("pon\n");
  if (m == 2) printf("hon\n");
  if (m == 4) printf("hon\n");
  if (m == 5) printf("hon\n");
  if (m == 7) printf("hon\n");
  if (m == 9) printf("hon\n");
  if (m == 3) printf("bon\n");


  return 0;

}
