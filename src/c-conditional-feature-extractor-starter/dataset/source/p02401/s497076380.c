#include <stdio.h>
int main(void){

int a,op,b,i;

    for(i=0;i<=20000;i++){

    scanf("%d %c %d",&a, &op, &b);
    if(0<=a&&a<20000&&0<b&&b<20000){
    
        if(op=='+'){
            printf("%d\n",a + b);
            }
        if(op=='-'){
            printf("%d\n",a - b);
        }
        if(op=='*'){
            printf("%d\n",a * b);
        }
        if(op=='/'){
            printf("%d\n",a / b);
        }
        if(op=='?') break;
    }
    }
    return 0;
}

