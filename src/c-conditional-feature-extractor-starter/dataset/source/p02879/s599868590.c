#include<stdio.h>
main()
{
  int A,B,C;
  scanf("%d,%d",&A,&B);
  C=A*B;
  if(1<=A<=9 && 1<=B<=9)  printf("%d",C);
  else printf("%d",-1);

  return 0;
}
