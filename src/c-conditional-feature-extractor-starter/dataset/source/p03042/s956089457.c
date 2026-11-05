#include<stdio.h>
int main(){
  int s;
  scanf("%d", &s);
  int b= s%100,a= (s-b)/100;
  if(a < 13 && a!=0){
    if(b < 13 && b!=0) printf("AMBIGUOUS\n"); 
    else printf("MMYY\n");
  }
  else{
    if(b < 13 && b!=0) printf("YYMM\n");
    else printf("NA\n");
  }
  return 0;
}