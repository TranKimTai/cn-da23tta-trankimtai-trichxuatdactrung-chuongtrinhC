#include <stdio.h>
 
int main(){
  int N;
  
  scanf("%d",&N);
  
  if(N > 100) N %= 110;
  else if(N > 10) N %= 10;
  
  if(N == 3) printf("bon\n");
  else if(N == 0 || N == 1 || N == 6 || N == 8) printf("pon\n");
  else printf("hon\n");
  
  return 0;
}