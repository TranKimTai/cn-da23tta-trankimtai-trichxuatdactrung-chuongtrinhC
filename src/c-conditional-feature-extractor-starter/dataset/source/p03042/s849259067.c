#include<stdio.h>
int main(void){
  int S,A,B;
  scanf("%d",&S);
  A=S/100;
  B=S-A*100;
  if(A>12){
    if(B>12){
      printf("NA");
    }
    if(B<=12 && B>0){
      printf("YYMM");
    }
    if(B==0){
      printf("NA");
    }
  }
  if(A<=12 && A>0){
    if(B>12){
      printf("MMYY");
    }
    if(B<=12 && B>0){
      printf("AMBIGUOUS");
    }
     if(B==0){
      printf("NA");
    }
  }
  if(A==0){
    printf("NA");
  }
  return 0;
}
