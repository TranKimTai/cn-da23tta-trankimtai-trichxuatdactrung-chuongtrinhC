#include<stdio.h>

int main(void)
{
  int S,S100,S1;
  scanf("%d",&S);
  S100 = S/100;
  S1 = S - (S100*100);
  if(S100 >= 13 || S100 == 0){
    if(S1 >= 13){
      printf("NA");
    }
    else if(S1 == 0){
      printf("NA");
    }
    else{
      printf("YYMM");
    }
  }
  else{
    if(S1 >= 1 && S1 <=12){
      printf("AMBIGUOUS");
    }
    else if(S1 >= 13 && S1 <= 99){
      printf("MMYY");
    }
    else if(S1 == 0){
      printf("MMYY");
    }
    else{
      printf("NA");
    }
  }
  return 0;
  
}