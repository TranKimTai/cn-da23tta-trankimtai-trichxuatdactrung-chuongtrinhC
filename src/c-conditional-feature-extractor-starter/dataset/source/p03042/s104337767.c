#include <stdio.h>
int main(void) {
    int s, former, rear;
    scanf("%d",&s);
    former = s/100;
    rear = s%100;
    if(former <= 12 && former >= 1) {
        if(rear <= 12 && rear >= 1) {
            printf("AMBIGUOUS\n");
        }
        else {
            printf("MMYY\n");
        }
    }
    else {
        if (rear <= 12 && rear >=1) {
            printf("YYMM\n");
        }
        else {
            printf("NA\n");
        }
    }
    return 0;
}