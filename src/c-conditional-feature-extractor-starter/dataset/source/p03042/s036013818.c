#include <stdio.h>

int main(void){
    int string;

    scanf("%d", &string);

    if (string / 100 == 0){
        printf("NA\n");
    }else if (string % 100 == 0){
        printf("NA\n");
    }else if (string / 100 > 12){
        if (string % 100 <= 12){
            printf("YYMM\n");
        }else{
            printf("NA\n");
        }
    }else{
        if (string % 100 <= 12){
            printf("AMBIGUOUS\n");
        }else{
            printf("MMYY\n");
        }
    }
    return 0;
}