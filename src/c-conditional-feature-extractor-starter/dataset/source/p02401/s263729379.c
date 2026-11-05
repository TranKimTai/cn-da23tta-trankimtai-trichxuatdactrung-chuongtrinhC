#include <stdio.h>

int main(void){
    int a, b;
    char op;
    double result;

    scanf("%d %c %d", &a, &op, &b);

    switch(op){
        case '+':
             result = a + b;
             break;
        case '-':
             result = a - b;
             break;
        case '*':
             result = a * b;
             break;
        case '/':
             result = a / b;
             break;
    }
    printf("%lf\n", result);
    return 0;
}