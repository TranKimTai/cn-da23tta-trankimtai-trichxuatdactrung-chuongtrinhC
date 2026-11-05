#include<stdio.h>
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if(a*b>81){
    printf("-1");
    return 0;
  }
  printf("%d",a*b);
}