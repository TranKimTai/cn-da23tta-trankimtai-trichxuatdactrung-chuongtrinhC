#include <stdio.h>

int main()
{
    int a,b;
    char op;
    
    while (op != 63)
    {
        scanf("%d %c %d",&a,&op,&b);
        // printf("%d %1c %d\n",a,op,b);
        if (op == 43)
            printf("%d\n", a + b);
        if (op == 45)
            printf("%d\n", a - b);
        if (op == 42)
            printf("%d\n", a * b);
        if (op == 47)
            printf("%d\n", a / b);
    }
}
