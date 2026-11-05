#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    printf("入力");
    scanf("%d", &N);
    while (N>=10) {
        N = N%10;
    }
    printf("N=");
    printf("%d",N);
    if (N==2||N==4||N==5||N==7||N==9) {
        printf("bon\n");
    }else if (N==0||N==1||N==6||N==8){
        printf("pon\n");
    }else{
        printf("bon\n");
    }
    
    return 0;
}