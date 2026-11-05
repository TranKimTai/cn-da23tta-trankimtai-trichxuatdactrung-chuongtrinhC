#include<stdio.h>

int main(void){
  int m, f, r;

  while(1){
    scanf("%d %d %d", &m, &f, &r);
    if(m == -1 && f == -1 && r == -1) break;
    
    if(m + f >= 80) printf("A\n");
    if(m + f < 80 && m + f >= 65) printf("B\n");
    if(m + f < 65 && m + f >= 50) printf("C\n");
    if(m + f < 50 && m + f >= 30 && r >= 50) printf("C\n");
    if(m + f < 50 && m + f >= 30 && r < 50) printf("D\n");
    if(m + f < 30) printf("F\n");
    if(m == -1 || f == -1) printf("F\n");

  }


  return 0;
}
