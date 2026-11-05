#include<stdio.h>

int main(void) {
  int s;
  int f, b;
  int flag_y = 0;
  int flag_m = 0;
  scanf("%d", &s);
  f = s / 100;
  b = s % 100;
  if ( f >= 1 && f <= 12 ) {
    flag_y = 1;
  }
  if ( b >= 1 && b <= 12 ) {
    flag_m = 1;
  }
  if ( flag_y && flag_m ) {
    printf("AMBIGUOUS\n");
  } else if ( flag_m ) {
    printf("YYMM\n");
  } else if ( flag_y ) {
    printf("MMYY\n");
  } else {
    printf("NA\n");
  }
  return 0;
}