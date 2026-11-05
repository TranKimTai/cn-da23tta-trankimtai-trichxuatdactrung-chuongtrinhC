#include<stdio.h>
int main(){
  int a,b;
  scanf("%d%d\n",&a,&b);
  if(a<=9&&a>=1&&b>=1&&b<=9){
    printf("%d",a*b);
  }
  else printf("-1");
  return 0;
}