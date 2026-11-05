#include <stdio.h>

int main(void) {
    int s_1;
    scanf("%d",&s_1);
    int s[4];
    s[0] = s_1 / 1000;
    s[1] = (s_1 / 100) % 10;
    s[2] = (s_1 / 10) % 10;
    s[3] = s_1 % 10;
    if((s[2] * 10 + s[3] <= 12 && s[2] * 10 + s[3] >= 1)  &&  (s[0] * 10 + s[1] > 12 || s[0] * 10 + s[1] < 1)) {
        printf("YYMM\n");
    } else if((s[0] * 10 + s[1] <= 12 && s[0] * 10 + s[1] >= 1)  &&  (s[2] * 10 + s[3] > 12 || s[2] * 10 + s[3] < 1)) {
        printf("MMYY\n");
    } else if((s[2] * 10 + s[3] <= 12 && s[2] * 10 + s[3] >= 1)  &&  (s[0] * 10 + s[1] <= 12 && s[0] * 10 + s[1] >= 1)) {
        printf("AMBIGUOUS\n");
    } else {
        printf("NA\n");
    }
    return 0;
}
