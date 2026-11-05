#include<stdio.h>

int main( ){

  int a,b,s;
  char op;
  scanf("%d%c%d",&a,&op,&b);
    if (op=='+'){
s=a+b;
printf("%d\n",s);}
    else if(op=='-'){
s=a-b;
printf("%d\n",s);}
else if(op=='*'){
s=a*b;
printf("%d\n",s);}
else if(op=='/'){
  s=a/b;
printf("%d\n",s);}
 else {}

return 0;
}