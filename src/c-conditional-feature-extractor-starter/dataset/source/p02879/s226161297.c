#include<stdio.h>

int main(void)
{
  int A,B;
  scanf("%d %d",&A,&B);
  if(10 > A||10 > B)printf("%u",A * B);
  else printf("-1");

  return 0;
}