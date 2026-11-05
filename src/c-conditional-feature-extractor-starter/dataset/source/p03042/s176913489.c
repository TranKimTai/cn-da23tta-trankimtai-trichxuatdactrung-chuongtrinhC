#include<stdio.h>
int main(){
  int s;
  scanf("%d",&s);
  if(0<s%100 && s%100<=12){
    if(0<s/100 && s/100<=12)
      printf("AMBIGUOUS\n");
    else
      printf("YYMM\n");
  }
  else{
    if(0<s/100 && s/100<=12)
      printf("MMYY\n");
    else
      printf("NA\n");
  }
  return 0;
}
