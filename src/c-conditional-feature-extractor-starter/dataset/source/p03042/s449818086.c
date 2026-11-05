#include <stdio.h>
int main(){
  int s,t,f,g;
  scanf("%d",&s);
  t=s%100;
  s/=100;
  if(0<s&&s<13)f=1;
  else f=0;
  if(0<t&&t<13)g=1;
  else g=0;
  if(f){
    if(g)puts("AMBIGUOUS");
    else puts("MMYY");
  }else{
    if(g)puts("YYMM");
    else puts("NA");
  }
  return 0;
}