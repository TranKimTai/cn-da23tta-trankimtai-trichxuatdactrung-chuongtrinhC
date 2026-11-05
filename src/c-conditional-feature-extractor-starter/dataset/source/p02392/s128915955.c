#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,k,a,b,c;
  char number[3][100];

  i = 0;
  k = 0;
  while((c = getchar()) != EOF) {
    if(c == ' ') {
      k++;
      i = 0;
    }else{
      number[k][i] = c;
      i++;
    }
  }
  a = atoi(number[0]);
  b = atoi(number[1]);
  c = atoi(number[2]);

  if(a < b && b < c) {
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  
  return 0;
}