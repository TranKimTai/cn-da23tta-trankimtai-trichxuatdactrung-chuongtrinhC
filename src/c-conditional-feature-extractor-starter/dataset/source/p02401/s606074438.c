#include <stdio.h>
#include <math.h>
int main(){
  int a, b, ans;
  char op;
  while(1){
    scanf("%d %c %d",&a,&op,&b);
    if(op == '?')break;
    switch(op){
      case '+':ans = a + b;break;
      case '-':ans = a - b;break;
      case '*':ans = a * b;break;
      case '/':ans = a / b;break;
      default:break;
      printf("%d",ans);
    }
  }
}