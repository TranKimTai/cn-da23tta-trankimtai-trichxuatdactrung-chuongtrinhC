#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char str[256];
  char result[65536];
  int m,f,r;
  int i;

  memset(result, 0, sizeof(result));
  for (;;) {
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d %d", &m,&f,&r);
    if ((m&f&r) == -1) break;

    if ((m == -1 || f == -1) || (m+f < 30)) {
      strncat(result, "F", 1);
      continue;
    }

    if (m+f >= 80) {
      strncat(result, "A", 1);
    } else if (m+f >= 65) {
      strncat(result, "B", 1);
    } else if (m+f >= 50) {
      strncat(result, "C", 1);
    } else if ((m+f >= 30) && (r >= 50)) {
      strncat(result, "C", 1);
    } else {
      strncat(result, "D", 1);
    }
  }
  for (i=0; i< strlen(result); i++) {
    printf("%c\n", result[i]);
  }
  return 0;
}