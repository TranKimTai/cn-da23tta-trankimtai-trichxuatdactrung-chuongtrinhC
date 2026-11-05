#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int up,down;
  down = n % 100;
  up = n / 100;
  int flag;
  if(1 <= down && down <= 12){//YYMM ok
    if(1 <= up && up <= 12) flag = 0;
    else flag = 1;
  }
  else{// YYMM x
    if(1 <= up && up <= 12) flag = 2;
    else flag = 3;
  }
  if(flag == 0) printf("AMBIGUOUS");
  else if(flag == 1) printf("YYMM");
  else if(flag == 2) printf("MMYY");
  else if(flag == 3) printf("NA");
  printf("\n");
  return 0;
}