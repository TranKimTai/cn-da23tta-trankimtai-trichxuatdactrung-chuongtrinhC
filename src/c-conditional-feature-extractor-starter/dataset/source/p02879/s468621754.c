#include<stdio.h>
int main()
{
  int A,B,C;
  scanf("%d%d",&A,&B);
  C=A*B;
  if(A<=9 && B<=9)  {
    printf("%d\n",C);}
  
  else { printf("-1\n");
       }
  return 0;
}
