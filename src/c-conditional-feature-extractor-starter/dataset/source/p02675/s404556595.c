#include<stdio.h>
signed main(){
    int N ,cou;
   scanf("%d", &N);
    cou = N;
    while(cou >10){
       cou = cou - 10;
    }
     if(cou == 2 || cou == 4 || cou == 5|| cou == 7||cou == 9){
         printf("hon\n");
     }else if(cou == 0||cou == 1||cou == 6|| cou == 8){
         printf("pon\n");
     }else if(cou == 3){
         printf("bon\n");
     }
    
}