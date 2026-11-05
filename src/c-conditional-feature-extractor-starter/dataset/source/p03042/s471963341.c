#include<stdio.h>

#define A 2

int main(void){

    int S,i,qianliangge,houliangge;

    scanf("%d",&S);

    qianliangge = (S / 1000) * 10 + (S / 100) % 10;
    houliangge = S % 100;

    if(qianliangge <= 12 && qianliangge != 0 && houliangge < 31 && houliangge > 12){
        printf("MMYY");
    }else if(qianliangge > 12 && qianliangge < 31 && houliangge <= 12 && houliangge != 0){
        printf("YYMM");
    }else if(qianliangge <= 12 && qianliangge != 0 && houliangge <= 12 && houliangge != 0){
        printf("AMBIGUOUS");
    }else{
        printf("NA");
    }

    return 0;
}