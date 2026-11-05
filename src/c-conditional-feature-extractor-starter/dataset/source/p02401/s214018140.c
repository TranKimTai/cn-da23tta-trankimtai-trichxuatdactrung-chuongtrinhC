#include <stdio.h>
#include <math.h>

int main(){

  int a,b;
  char op;
  while(1){
    scanf("%d %c %d",&a,&op,&b);
    if(op == '+'){
      printf("%d\n",a+b);
    }
    if(op == '-'){
      printf("%d\n",a-b);
    }
    if(op == '*'){
      printf("%d\n",a*b);
    }
    if(op == '/'){
      printf("%d\n",a/b);
    }
    if(op == '?'){
      break;
    }
  }
  //  printf("%lf %lf\n",3.1415926535*r*r,2*r*3.1415926535);
  return 0;
}