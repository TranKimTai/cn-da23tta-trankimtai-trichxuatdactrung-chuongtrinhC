#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char S[5], X[3], Y[3];
  int XisMM, YisMM;
  XisMM = 0;
  YisMM = 0;
  scanf("%s", S);
  X[0]=S[0];
  X[1]=S[1];
  X[2]=0x00;
  Y[0]=S[2];
  Y[1]=S[3];
  Y[2]=0x00;
  
  if (atoi(X)>=1 && atoi(X)<=12) XisMM = 1;
  if (atoi(Y)>=1 && atoi(Y)<=12) YisMM = 1;
  
  if (XisMM && !YisMM) {
    printf("MMYY\n");
  } else if (!XisMM && YisMM) {
    printf("YYMM\n");
  } else if (XisMM && YisMM) {
    printf("AMBIGUOUS\n");
  } else {
    printf("NA\n");
  }
}