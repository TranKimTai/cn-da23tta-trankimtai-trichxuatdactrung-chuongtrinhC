#include<stdio.h>
int main(){
  int a,b,x;
  scanf("%d%d%d",&a,&b,&x);
  printf(x<a||x>a+b?"NO":"YES");
}
