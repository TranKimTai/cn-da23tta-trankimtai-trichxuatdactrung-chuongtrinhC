#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A==B&&B!=C&&C!=A)
    {
        printf("yes\n");
    }
    else if(A!=B&&B==C&&C!=A)
    {
        printf("yes\n");
    }
    else if(A!=B&&B!=C&&C==A)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
}
