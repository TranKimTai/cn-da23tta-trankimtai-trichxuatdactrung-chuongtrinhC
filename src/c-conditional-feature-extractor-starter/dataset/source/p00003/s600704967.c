#include<stdio.h>
int main(void){
  int a,b,c,i,j;
  scanf("%d",&i);
  for(j=0;j<i;j++){
    scanf("%d %d %d",&a,&b,&c);
    if((a*a + b*b == c*c)|| (c*c + a*a == b*b)||(b*b + c*c == a*a)){
      printf("YES\n");
    }
    else
      printf("NO\n");
  }
  return 0;
}