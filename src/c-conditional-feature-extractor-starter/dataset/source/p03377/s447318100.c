#include <stdio.h>

int main() {
  int a,b,x = 0;
  int c;

  scanf("%d %d %d", &a,&b,&x);

    if(a+b >= x && x >= a){
      printf("YES");
    } else {
      printf("NO");
    }

  // if(flag == 1){
  // } else {
  //   printf("NO");
  // }

  return 0;
}