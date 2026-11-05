#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int u=n/100;
  int d=n-(u*100);

  if((d<13&&u<13)&&0<d&&0<u){
    printf("AMBIGUOUS");
  }else if((d==0&&12<u)||(u==0&&12<d)||(12<d&&12<u)||(d==0&&u==0)){
    printf("NA");
  }else if((12<u||u==0)&&d<13&&0<d){
    printf("YYMM");
  }else if((12<d||d==0)&&u<13&&0<u){
    printf("MMYY");
  }

  return 0;
}
