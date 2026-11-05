#include<stdio.h>
int main(){
int a, b,c;
  scanf("%d %d %d",&a,&b,&c);
  if (a==b && b==c){
  printf("No");
  }else if(a-b==0 || b-c==0 || c-a==0){
  printf("Yes");
  }else{
   printf("No");
  }
  return 0;
}