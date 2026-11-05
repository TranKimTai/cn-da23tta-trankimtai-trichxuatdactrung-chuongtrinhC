#include <stdio.h>

int main(void){

  char s[5];
  scanf("%s", s);

  if ((s[2] == '0' && s[3] != '0') || (s[2] == '1' && s[3] >= '0' && s[3] <= '2')) {
    if ((s[0] == '0' && s[1] != '0') || (s[0] == '1' && s[1] >= '0' && s[1] <= '2')) {
      printf("AMBIGUOUS\n");
    } else {
      printf("YYMM\n");
    }
  } else {
    if ((s[0] == '0' && s[1] != '0') || (s[0] == '1' && s[1] >= '0' && s[1] <= '2')) {
      printf("MMYY\n");
    } else {
      printf("NA\n");
    }
  }

  return 0;
}