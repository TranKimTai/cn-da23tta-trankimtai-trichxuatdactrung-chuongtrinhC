#include<stdio.h>
int main()
{
  int A,B,C;
  scanf("%d,%d",&A,&B);
  C=A*B;
  if(1<=A<=9 && 1<=B<=9)  printf("%d\n",C);
  else printf("-1\n");
 
  return 0;
}
