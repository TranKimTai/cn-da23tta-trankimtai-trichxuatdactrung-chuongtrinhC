#include<stdio.h>
int main(void){
int a,b,op;
while(1){
scanf("%d %c %d\n",&a,&op,&b);
if (op=='?') break;
if (op=='+') printf("%d\n",a+b);
if (op=='-') printf("%d\n",a-b);
if (op=='*') printf("%d\n",a*b);
if (op=='/') printf("%d\n",a/b);
}
}

