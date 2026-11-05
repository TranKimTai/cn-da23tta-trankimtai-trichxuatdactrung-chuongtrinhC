//============================================================================
// 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//============================================================================
#define PI 3.14159265359
#define succ(x) ((x)+1)
#define pred(x) ((x)-1)
//============================================================================
void enter()
{
    long a,b; char op[2];

    while(1){
        scanf("%ld", &a);
        scanf("%c", &op);
        scanf("%ld", &b);
        switch(*op){
            case '+': a+=b; break;
            case '-': a-=b; break;
            case '*': a*=b; break;
            case '/': a/=b; break;
            default: return;
        }
        printf("%ld\n", a);
    }
}
//============================================================================
int main(void)
{
    enter();
    return 0;
}
//============================================================================