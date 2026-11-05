#include<stdio.h>

int main(){
   int x;
   printf("数字を入力してください\n");
   scanf("%d", &x);

   switch(x % 10){
   case 2:
   case 4:
   case 5:
   case 7:
   case 9:
      puts("hon");
      break;
   case 0:
   case 1:
   case 6:
   case 8:
      puts("pon");
      break;
   case 3:
      puts("bon");
      break;
   }
   return 0;
}