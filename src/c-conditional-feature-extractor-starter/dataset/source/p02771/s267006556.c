#include <stdio.h>

int main(void){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if(a != b && b != c && c != a)
    puts("No");
  else{
    if(a == b && b == c && c == a)
      puts("No");
    else
      puts("Yes");
  }
  
  return 0;
}
