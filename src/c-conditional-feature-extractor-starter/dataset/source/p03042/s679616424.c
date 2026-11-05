#include <stdio.h>


int main(void){
    int s, a, b, ym, my;
    ym = 0;
    my = 0;
    scanf("%d", &s);
    a = s % 100;
    b = s - a * 100;
    if(b > 0 && b < 13){
        ym = 1;
    }
    if(a > 0 && a < 13){
        my = 1;
    }
    switch(ym){
        case 0:
            switch(my){
                case 0:
                    printf("NA\n");
                    break;
                case 1:
                    printf("MMYY\n");
                    break;
            }
            break;
        case 1:
            switch(my){
                case 0:
                    printf("YYMM\n");
                    break;
                case 1:
                    printf("AMBIGUOUS\n");
                    break;
            }
        break;
    }

    return 0;
}