#include <stdio.h>

int main()
{
    //char S[4+1];
    int head;
    int tail;
    int yymm;
    int mmyy;

    scanf("%2d%2d", &head, &tail);

    if(head >= 0 && head <= 99 && tail >= 1 && tail <= 12) {
        yymm = 1;
    } else {
        yymm = 0;
    }

    if(head >= 1 && head <= 12 && tail >= 0 && tail <= 99) {
        mmyy = 1;
    } else {
        mmyy = 0;
    }

    if(yymm == 1 && mmyy == 1) {
        printf("AMBIGUOUS\n");
    } else if(yymm == 1 && mmyy == 0) {
        printf("YYMM\n");
    } else if(mmyy == 1) {
        printf("MMYY\n");
    } else {
        printf("NA\n");
    }

    return 0;
}