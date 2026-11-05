#include<stdio.h>

int main() {
   int S;
   scanf("%d", &S);
   int a = S / 100;
   int b = S % 100;
   if(b <= 12) {
      if(a <= 12) {
         printf("AMBIGUOUS");
      } else {
         printf("YYMM");
      }
   } else {
      if(a <= 12) {
         printf("MMYY");
      } else {
         printf("NA");
      }
   }
}
