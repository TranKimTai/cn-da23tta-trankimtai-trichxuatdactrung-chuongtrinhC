/* ex3_2
   tamayama */

#include<stdio.h>

int main(void){
    int N;
    int Pencil;
    scanf("%d",&N);
    Pencil = N;
    if((Pencil-2)%10 == 0 || (Pencil-4)%10 == 0 || (Pencil-5)%10 == 0 || (Pencil-7)%10 == 0 || (Pencil-9)%10 == 0){
        printf("hon");
    }else if(Pencil%10 == 0 || (Pencil-1)%10 == 0 || (Pencil-6)%10 == 0 || (Pencil-8)%10 == 0){
        printf("pon");
    }else{
        printf("bon");
    }
    return 0;
}
