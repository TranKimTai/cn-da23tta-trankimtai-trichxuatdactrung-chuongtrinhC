#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A<=9 && B<=9)
    {
        printf("%d x %d = %d\n",A,B,A*B);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
