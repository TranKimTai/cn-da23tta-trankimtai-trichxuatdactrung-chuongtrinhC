#include <stdio.h>

int main(void){
    int a, b;
    char op;
    double result;

    while(1){
         scanf("%d %c %d", &a, &op, &b);
         if(op == '?') return 0;
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
    }
    return 0;
}