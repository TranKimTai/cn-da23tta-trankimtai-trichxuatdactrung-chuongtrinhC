#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a==b&&a==c){
    printf("No");
    return 0;
  }
  if(a!=b&&a!=c&&b!=c){
    printf("No");
    return 0;
  }
  printf("Yes");
  return 0;
}