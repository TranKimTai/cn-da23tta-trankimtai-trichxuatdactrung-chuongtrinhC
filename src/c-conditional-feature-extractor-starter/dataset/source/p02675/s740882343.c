#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
 
 char N[4] ;
 scanf("%s",N);

  int d = N[strlen(N)-1] - '0';

  if (d == 2 || d == 4 || d == 5 || d == 7 || d == 9)printf("hon");
  else if (d == 0 || d == 1 || d == 6 || d == 8)printf("pon");
  else if (d== 3) printf("bon");



  return 0;
}
