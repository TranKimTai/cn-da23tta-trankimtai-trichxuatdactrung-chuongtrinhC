#include <stdio.h>

int main() {
int i,a,b,x;
char op;
for (  i == 0 ; 1  ;  i++){
scanf("%d %c %d",&a,&op,&b);
if(op=='+') x=(a+b);
else if(op=='/') {x=a/b;}
else if(op=='*') {x=a*b;}
else if(op=='-') {x=a-b;}
else if(op=='?') {break;}
printf("%d\n",x);
}
return 0;
}