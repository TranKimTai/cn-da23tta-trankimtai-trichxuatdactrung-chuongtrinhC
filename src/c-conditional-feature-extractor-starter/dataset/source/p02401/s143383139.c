#include <stdio.h>

int main(){
    int a, b, c;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    if (op == '+')
        c = a + b;
    else if(op == '-')
        c = a - b;
    else if(op == '*')
        c = a * b;
    else if(op == '/')
        c = (int)(a / b);
    else
        return 0;
    printf("%d\n", c);
    
    return 0;
}