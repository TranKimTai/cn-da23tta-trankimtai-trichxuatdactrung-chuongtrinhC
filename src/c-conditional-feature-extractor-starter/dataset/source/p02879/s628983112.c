#include <stdio.h>
int main()
{
int A,B;
  scanf("%d , %d",&A,B);
  if(1<=A && A<=9 && 1<=B &&B<=9)
  {
    printf("%d\n", A*B);
  }
  else
    printf("-1\n");
  
  return 0;
}

  
