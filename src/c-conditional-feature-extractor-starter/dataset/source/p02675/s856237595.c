#include<stdio.h>
int main(void) {
    int n, rem=0;
    scanf("%d", &n);
    rem = n % 10;
    if (rem == 3) {
        printf("bon");
    }
    else if ((rem ==0 ) || (rem == 1) || (rem ==6 )||(rem==8)) {
        printf("pon");
    }
    else {
        printf("hon");
    }
    return 0;
}