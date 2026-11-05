#include<stdio.h>
int main()
{
    int a,b,s;
    char op;
    while(1)
    {
        scanf("%d %c %d",&a,&op,&b);
        if(op=='?')
        {
            break;
        }
        if(op=='+')
        {
            s=a+b;
        }
        else if(op=='-')
        {
            s=a-b;}
        else if(op=='*')
        {
            s=a*b;
        }
         else if(op=='/')
        {
            s=a/b;
        }
        printf("%d\n",s);
    }
    return 0;
}

