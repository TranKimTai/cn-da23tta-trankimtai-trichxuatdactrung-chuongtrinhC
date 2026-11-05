#include<stdio.h>

int main()

{
    int x,y;
    char operator;


    while(scanf("%d %c %d", &x, &operator, &y)!=EOF)
    {
        if(operator=='?')
        {
            break;
        }

        switch(operator)
       {
        case'+':
        printf("%d\n", x+y);
        break;

        case'-':
        printf("%d\n", x-y);
        break;

        case'*':
        printf("%d\n", x*y);
        break;

        case'/':
        printf("%d\n", x/y);
        break;

    }
}

    return 0;



}

