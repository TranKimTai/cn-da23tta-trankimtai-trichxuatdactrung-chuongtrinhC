#include<stdio.h>

int main() {
  int n, i;
  scanf("%d", &n);
  int a, b, c, aa, bb, cc;
  for (i = 0; i < n; i += 1) {
    scanf("%d %d %d", &a, &b, &c);
    aa = a * a;
    bb = b * b;
    cc = c * c;

    if(aa == bb + cc || bb == cc + aa || cc == aa + bb) {
      printf("YES\n");
    } else {
      printf("NO\n");
      break;
    };                                                                                                                                                                     
  };
  return 0;
} 