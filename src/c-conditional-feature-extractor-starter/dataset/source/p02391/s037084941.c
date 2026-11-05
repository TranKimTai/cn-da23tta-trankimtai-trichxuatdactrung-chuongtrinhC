#include<stdio.h>


int main(void){
int a;
int b;

 scanf("%d", &a);
 scanf("%d", &b);
 
 if(a>-1000||b>1000)
printf("Too Large\n");

 if(a>b)
 printf("a > b\n");

 if(a<b)
 printf("a < b\n");

  if(a==b)
 printf("a == b\n");
}