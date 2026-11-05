#include <stdio.h>

int main()
{
 int A,B,C;
 scanf("%d%d",&A,&B);

  if(A>=10||B>=10)
  { 
    C=-1;
  }
  else     C=A*B;
  
  printf("%d",C);
}