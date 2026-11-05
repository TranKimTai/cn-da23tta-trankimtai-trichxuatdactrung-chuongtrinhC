#include <stdio.h>

int main(void)
{
  int a,b,c;
  
  while(1){    
    scanf("%d%d%d",&a,&b,&c);
    
    if(1<=a&&a<=9&&1<=b&&b<=9&&1<=c&&c<=9)
      break;
  }
  
  if(a==b&&b!=c)
    printf("Yes");
  if(a!=b&&b==c)
    printf("Yes");
  if(a!=b&&c==a)
    printf("Yes");
  else
    printf("No");
  
  return 0;
}