/* ex3_2
   tamayama */

#include<stdio.h>

int main(void){
    int N;
    scanf("%d",&N);

    if((N-2)%10 == 0 || (N-4)%10 == 0 || (N-5)%10 == 0 || (N-7)%10 == 0 || (N-9)%10 == 0){
        printf("hon");
    }else if(N%10 == 0 || (N-1)%10 == 0 || (N-6)%10 == 0 || (N-8)%10 == 0){
        printf("pon");
    }else{
        printf("bon");
    }
    return 0;
}