#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int i, a;
  for(i=0; i < n; i++){
    scanf("%d", &a);
    if((a % 2 == 0) && (a % 3 != 0) && (a % 5 != 0)){
      printf("DENIED");
      return 0;
    }
  }
  printf("APPROVED");
  return 0;
}