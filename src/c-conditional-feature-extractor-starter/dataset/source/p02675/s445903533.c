/* ex3_2
    riverstone*/

#include<stdio.h>
 
int main(void){
    //nをint型で定義して入力する。
    int number;
    scanf("%d", &number);
 
    // nを10で割った余りをswitchで場合分け
    switch (number % 10){
    case 2: case 4: case 5: case 7: case 9:
        printf("hon\n");
        break;
    
    case 0: case 1: case 6: case 8:
        printf("pon\n");
        break;
 
    case 3:
        printf("bon\n");
        break;
    }
    return 0;
}