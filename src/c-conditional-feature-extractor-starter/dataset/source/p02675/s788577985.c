#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int s = n % 10;
    if(s == 2 || s == 4 || s == 5 || s == 7 || s == 9)puts("hon");
    else if(s == 3)puts("bon");
    else puts("pon");
}