/* ex3_2 melo */
#include <stdio.h>
int main(void){
    int Number,onesplace;//整数の箱を二つ用意する
    scanf("%d",&Number);//本数を代入する
    onesplace = Number%10;//一の位の数を出す
    switch(onesplace){//連続したif文なのでswitch関数を使う
        case 2:case 4:case 5:case 7:case 9://onesplaceが2または4または5または7または9であった場合
        printf("hon\n");//honとよむ
        break;//swich{}から抜ける
        case 0:case 1:case 6:case 8://onesplaceが0,1,6,8のいずれかであった場合
        printf("pon\n");//ponとよむ
        break;//swich{}から抜ける
        case 3://onesplaceが3であった場合
        printf("bon\n");//bonとよむ
        break;//swich{}から抜ける
        default:fprintf(stderr, "unexpected Number value:%d¥n", Number);return 1;//他の場合errorを出す

    }
    return 0;
    

}