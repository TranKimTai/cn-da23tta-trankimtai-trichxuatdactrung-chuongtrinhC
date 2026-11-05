#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char s[5];
    int y;
    int m;
    int ym = 0;
    int mm = 0;
    
    scanf("%s\n", s);
    y = s[0] - '0' * 10 + s[1] - '0';
    m = s[2] - '0' * 10 + s[3] - '0';
    
    if(1 <= y && y <= 12){
        ym = 1;
    }
    if(1 <= m && m <= 12){
        mm = 1;
    }
    if(ym + mm == 2){
        printf("AMBIGUOUS\n");
    }else if(ym + mm == 0){
        printf("NA\n");
    }else if(ym == 1){
        printf("MMYY\n");
    }else{
        printf("YYMM\n");
    }
    return 0;
}

/*YYMM, MMYY, AMBIGUOUS, NA */
