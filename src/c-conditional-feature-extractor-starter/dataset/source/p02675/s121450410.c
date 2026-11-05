#include<stdio.h>
int main(){
   int x;
   scanf("%d",&x);
   if(x%10==2||x%10==4||x%10==5||x%10==7||x%10==9){
      printf("hon");
   }
   if(x%10==0||x%10==1||x%10==6||x%10==8){
      printf("pon");
   }
   if(x%10==3){
      printf("bon");
   }
   return 0;
}