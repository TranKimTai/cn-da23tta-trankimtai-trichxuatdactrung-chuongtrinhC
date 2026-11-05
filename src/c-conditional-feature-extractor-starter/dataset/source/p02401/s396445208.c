#include <stdio.h>

int main(void){
  int a,c,d;
  char b;

  while(1){
  scanf("%d",&a);
  scanf("%s",&b);
  scanf("%d",&c);
    if(b == '?'){
      break;
    }
    else{
      switch(b){
      case '+' :
      printf("%d",a + c);
      break;
    
      case '-' :
      printf("%d",a - c);
      break;

      case '*' :
      printf("%d",a * c);
      break;

      case '/' :
      printf("%d",a / c);
      break;
      }
      printf("\n");
    }
  }
  return 0;
}
