//ex3_2
//TKC001

#include<stdio.h>

int main(void){
    int N;

    scanf("%d", &N);

    switch (N)
    {
    //bonを出力
    case 3:
        printf("bon");
        break;
    
    //ponを出力
    case 0:
    case 1:
    case 6:
    case 8:
        printf("pon");
        break;

    //honを出力
    default:
        printf("hon");
        break;
    }

    return 0;
}