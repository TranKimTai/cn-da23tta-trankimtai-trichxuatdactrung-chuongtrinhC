#include<stdio.h>
int main()
  {
  int A,B,C;
  scanf("%d %d %d",&A,&B,&C);
  if(A==B&&A!=C)
    printf("Yes\n");
    if(A!=B&&B==C)
    printf("Yes\n");
  if(A==C&&A!=B)
    printf("Yes\n");
  else if(A==B&&A==C)
    printf("No\n");
  return 0;
  }
  