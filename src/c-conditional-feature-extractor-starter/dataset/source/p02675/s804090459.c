#include<stdio.h>
int main(){
   int N;
   scanf("%d",&N);
if(N<=999 && N>=0){
   if(N%10==2 ||N%10==2 ||N%10==5||N%10==7||N%10==9){
      printf("%s\n","hon");
   }else if(N%10==0 || N%10==1 || N%10==6 ||N%10==8){
      printf("%s\n","pon");
   }else if(N%10==3){
      printf("%s\n","bon");
   }
   }
   return 0;
}