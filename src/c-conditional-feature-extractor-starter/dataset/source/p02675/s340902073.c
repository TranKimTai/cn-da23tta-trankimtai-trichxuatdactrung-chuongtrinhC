/* ex3_2
   kohei_suzuki */

#include <stdio.h>
int main(void){
    int num, rem; //本数numとnumの一の位rem

    scanf("%d",&num);
    rem = num % 10; //nの一の位を取り出す

    if(rem==0 || rem==1 || rem==6 || rem==8){ //remが0,1,6,8の場合
        printf("pon\n");
    }else if(rem == 3){ //remが3の場合
        printf("bon\n");
    }else{ //remが2,4,5,7,9の場合
        printf("hon\n");
    }

    return 0;
}