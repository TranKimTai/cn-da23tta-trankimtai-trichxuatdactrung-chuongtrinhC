#include <stdio.h>
int main(){
    int a,b,r;
    char op;
    while(1){
        scanf("%d %s %d", &a, &op, &b);
        if ( op == '?' ) break;
        if ( op == '+' ) r = a + b;
        if ( op == '-' ) r = a - b;
        if ( op == '*' ) r = a * b;
        if ( op == '/' ) r = a / b;
        printf("%d\n", r );
    }
    return 0;
}