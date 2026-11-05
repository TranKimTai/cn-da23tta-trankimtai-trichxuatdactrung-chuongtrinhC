#include<stdio.h>
int main(void){

  int a,op,b,i;

  scanf("%d%d%d",&a,&op,&b);

  for(i=0;;i++){

  if (op == '+' )
    printf("%d\n",a+b);
  else if(op == '-' )
    printf("%d\n",a-b);
  else if(op == '*' )
    printf("%d\n",a*b);
  else if(op == '/' )
    printf("%d\n",a/b);
  else
    break;
  }

  return 0;
}