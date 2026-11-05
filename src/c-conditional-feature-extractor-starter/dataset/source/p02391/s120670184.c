#include <stdio.h>

int main(int argc, const char * argv[]){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a < b){
        a=a;
        b=b;
    }else{
        a=b;
        b=a;
    }
    printf("%d<%d\n",a,b);
    return 0;
}