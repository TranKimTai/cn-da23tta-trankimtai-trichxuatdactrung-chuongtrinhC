/* ex3_2
   urah  */

#include <stdio.h>

int main(void){
    int num;

    // 入力受け取り
    scanf("%d", &num);

    // 条件分岐
    if (num%10 == 3) {    // 1の位の数字を見ていく
        printf("bon");
    } else if (num%10 == 0 || num%10 == 1 || num%10 == 6 || num%10 == 8){
        printf("pon");
    } else {
        printf("hon");
    }

    return 0;
}
