#include <stdio.h>
#include <stdlib.h>

int main(){
  int a,b,c;
  while(a<1||a>9){
    scanf("%d",&a);
  }
  while(b<1||b>9){
    scanf("%d",&b);
  } 
  while(c<1||c>9){
    scanf("%d",&c);
  }
  if(a==b && b==c){
    printf("No");
  }
  else if(a!=b && b!=c && a!=c){
    printf("No");
  }
  else printf("Yes");
  return 0;
}
