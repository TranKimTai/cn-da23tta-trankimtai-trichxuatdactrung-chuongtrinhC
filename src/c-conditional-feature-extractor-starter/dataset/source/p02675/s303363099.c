/* ABC168_A
    Stuartyg */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int main(void){
    int num;
    scanf("%d",&num);
    num%=10; /*10で割った余りがnの1の位*/
    switch(num){
        case 3:
            printf("bon\n");
            break;
        case 0:
            printf("pon\n");
            break;
        case 1:
            printf("pon\n");
            break;
        case 6:
            printf("pon\n");
            break;
        case 8:
            printf("pon\n");
            break;
        default:
            printf("hon\n");
            break;
    }
    return 0;
}
