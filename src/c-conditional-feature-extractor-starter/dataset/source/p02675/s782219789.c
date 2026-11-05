#include<stdio.h>

int main(void){
   int x[5];
   printf("整数を入力してください\n");
   scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);
      
   if(x[0] == 0){
      printf("%d\n", 1);
   }else if(x[1] == 0){
      printf("%d\n", 2);
   }else if(x[2] == 0){
      printf("%d\n", 3);
   }else if(x[3] == 0){
      printf("%d\n", 4);
   }else if(x[4] == 0){
      printf("%d\n", 5);
   }
  return 0;
}