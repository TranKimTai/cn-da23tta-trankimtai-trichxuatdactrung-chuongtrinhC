#include<stdio.h>
int main(){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a<c)
    a=c;
  if(b>d)
    b=d;
  printf("%d\n",b-a>0?b-a:0);
  return 0;
}
