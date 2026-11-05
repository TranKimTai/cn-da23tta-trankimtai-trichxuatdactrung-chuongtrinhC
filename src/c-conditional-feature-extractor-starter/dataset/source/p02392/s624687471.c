#include<stdio.h>
int main(void){
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d",&a,&b,&c);
    if(0 <= a&&a <= 100&&0 <= b&&b <= 100&&0 <= c&&c <= 100){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}