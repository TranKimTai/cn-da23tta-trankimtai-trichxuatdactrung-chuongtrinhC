#include <stdio.h>

int main(void){
  int a,b;
  char op;

  while(1){
    scanf("%d",&a);
    scanf("%s",&op);
    scanf("%d",&b);
    if(op == '?'){
      break;
    }
    switch(op){
      case '+' :
      printf("%d\n",a + b);
      break;
    
      case '-' :
      printf("%d\n",a - b);
      break;

      case '*' :
      printf("%d\n",a * b);
      break;

      case '/' :
      printf("%d\n",a / b);
      break;
    }
  }
  return 0;
}
