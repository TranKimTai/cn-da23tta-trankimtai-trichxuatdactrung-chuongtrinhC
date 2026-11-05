#include <stdio.h>

int main()
{
 int a, b, c, d, e;
 if(a >= (c + e) && b >= (d + e)) {
  if((c - e) >= 0 && (d - e) >= 0) {
   printf("Yes\n");
  }
 }
 else {
  printf("No\n");
 }
 return 0;
}