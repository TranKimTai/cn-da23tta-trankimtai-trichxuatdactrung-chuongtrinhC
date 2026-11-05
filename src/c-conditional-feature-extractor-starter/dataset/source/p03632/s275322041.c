#include<stdio.h>

int main(void){
  int a, b, c, d, e, f, g;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  
  if(a<c){
    e = c;
  }
  else{
    e = a;
  }
  if(b<d){
    f = b;
  }
  else{
    f = d;
  }
  g = f-e;
  
  if(b<c){
    printf("0");
  }
  else{
    printf("%d", g);
  }
  

  return 0;
}
