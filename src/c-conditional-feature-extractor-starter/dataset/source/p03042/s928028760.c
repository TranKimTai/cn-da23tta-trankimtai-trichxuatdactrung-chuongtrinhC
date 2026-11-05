#include <stdio.h>
int Toint(char c) {
    return c -'0';
}

int yy(int num) {
    return num > 0 && num <= 12;
}
int mm(int num) {
    return num > 0 && num <= 31;
}
int main(void) {
    char s[4];
    scanf("%s",s);
    int num1 = Toint(s[0])*10 + Toint(s[1]);
    int num2 = Toint(s[2])*10 + Toint(s[3]);
    if(yy(num1) && mm(num2) ){
        printf("MMYY\n");
        if(mm(num1) && yy(num2)) {
            printf("AMBIGUOUS\n");
        }
    } else if(mm(num1) && yy(num2)) {
        printf("YYMM\n");
    } else {
        printf("NA\n");
    }
}