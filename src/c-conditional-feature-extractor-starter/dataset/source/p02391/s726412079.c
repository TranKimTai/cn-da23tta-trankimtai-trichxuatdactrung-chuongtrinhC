#include <stdio.h>
int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if(a >= -1.000 && b <= 1.000){
        if(a < b){
            printf("a < b\n");
        } else if(a > b){
            printf("a > b\n");
        } else if(a == b){
            printf("a == b\n");
        }
    }
return 0;
}