#include <stdio.h>
int main(){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a<c)a=c;
  if(b>d)b=d;
  printf("%d",b-a);
  return 0;
}