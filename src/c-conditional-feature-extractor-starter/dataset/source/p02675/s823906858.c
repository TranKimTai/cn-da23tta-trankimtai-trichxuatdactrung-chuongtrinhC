/* abc_168_a */

#include<stdio.h>

int main()
{
  int N,n;
  scanf("%d",&N);
  n=N%10;
  if (n==2 || n==4 || n==5 || n==7 || n==9) printf("hon\n");
  if (n==0 || n==1 || n==6 || n==8) printf ("pon\n");
  if (n==3) printf("bon\n");
  return 0;
}
