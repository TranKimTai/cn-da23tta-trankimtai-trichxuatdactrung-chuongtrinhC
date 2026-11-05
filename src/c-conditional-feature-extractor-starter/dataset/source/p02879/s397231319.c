#include <stdio.h>
int main(void)
{
  int a,b;
  scanf("%a,%b",&a,&b);
  if(a<10 && b<10){
    printf("a*b\n");
  }
  else{
    printf("-1");
  }
  return 0;
}