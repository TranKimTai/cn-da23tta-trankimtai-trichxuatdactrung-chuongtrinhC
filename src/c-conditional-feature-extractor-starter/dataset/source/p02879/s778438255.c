#include<stdio.h>
main()
{
  int A,B,C;
  scanf("%d%d",&A,&B);
  C=A*B;
  if(A<=9 && B<=9){
    printf("%d",C);
  }
  if(10<=A<=20 || 10<=B<=20){
    printf("%d",-1);
  }
  return 0;
}
