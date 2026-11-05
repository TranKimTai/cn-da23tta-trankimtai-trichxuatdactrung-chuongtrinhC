#include <stdio.h>

void main()
{
  int n, i, a, b, hypo;

  for (scanf("%d", &n); n > 0; n--) {
    scanf("%d %d %d", &a, &b, &hypo);

    if (a > hypo) {
      i = hypo; hypo = a; a = i;
    } 
    if (b > hypo) {
      i = hypo; hypo = b; b = i;
    }

    if (a*a + b*b == hypo*hypo) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}