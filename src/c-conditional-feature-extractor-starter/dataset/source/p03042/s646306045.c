#include<stdio.h>

int main(){
  int N;

  scanf("%d", &N);

  int YY = N / 100;
  int MM = N % 100;

  if(0 < YY && YY <= 12 && 0 < MM && MM <= 12) printf("AMBIGUOUS\n");
  else if(0 < YY && YY <= 12 && 0 < MM) printf("MMYY\n");
  else if(0 < MM && MM <= 12 && 0 < YY) printf("YYMM\n");
  else printf("NA\n");

  return 0;
}
