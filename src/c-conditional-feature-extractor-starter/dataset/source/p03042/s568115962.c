#include<stdio.h>

int main() {
  int i;

  char s_val[4];
  scanf("%s", s_val);
  for(i = 0; i < 4; i++) s_val[i] -= '0';

  int first = 10 * s_val[0] + s_val[1];
  int last  = 10 * s_val[2] + s_val[3];

  int yymm = 0;
  int mmyy = 0;

  if(1 <= first && first <= 12) mmyy = 1;
  if(1 <= last  && last  <= 12) yymm = 1;

  if(yymm == 1 && mmyy == 0)      printf("YYMM\n");
  else if(yymm == 0 && mmyy == 1) printf("MMYY\n");
  else if(yymm == 1 && mmyy == 1) printf("AMBIGUOUS\n");
  else                            printf("NA\n");

  return 0;
}
