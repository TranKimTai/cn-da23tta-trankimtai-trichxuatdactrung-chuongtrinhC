#include <stdio.h>

int main(void)
{
  int i,j;
  scanf("%d", &i);
  scanf("%d", &j);
  
  if( i<=9 || j<=9){
    printf("%d\n",i*j);
  } else {
    printf("-1\n");
  }
  
  return 0;
}
