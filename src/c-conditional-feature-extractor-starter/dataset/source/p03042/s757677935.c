#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    int x[4];
    scanf("%d", &a);
    x[0] = a/1000;
    x[1] = a/100%10;
    x[2] = a/10%10;
    x[3] = a%10;
    if((x[0] >= 1 && x[1] >= 3) || (x[0] == 0 && x[1] == 0)) {
        if((x[2] >= 1 && x[3] >= 3) || (x[2] == 0 && x[3] == 0)) {
            printf("NA\n");
        } else {
            printf("YYMM\n");
        }
    }
    if(x[0] <= 1 && x[1] <= 2) {
        if((x[2] >= 1 && x[3] >= 3) || (x[0] == 0 && x[1] == 0)) {
            printf("MMYY\n");
        } else {
            printf("AMBIGUOUS\n");
        }
    }
    return 0;
}
