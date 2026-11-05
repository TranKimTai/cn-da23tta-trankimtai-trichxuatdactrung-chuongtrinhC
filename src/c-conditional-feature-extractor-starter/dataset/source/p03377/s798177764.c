#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,b,x;
 while(~scanf("%d%d%d",&a,&b,&x))
 {
  if(a>x)
  printf("NO\n");
  if(a<=x)
  {if(a+b>=x)
  printf("YES\n");
  if(a+b<x)
  printf("NO\n");
  }
 }
    return 0;
}
