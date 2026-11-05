#include<stdio.h>
int main(){
  int a,b;
  int c = a*b;
  scanf("%d%d",&a,&b);
  if((a<10)&&(b<10)){
    printf("%d",c);
  }
  else
    printf("-1");
}