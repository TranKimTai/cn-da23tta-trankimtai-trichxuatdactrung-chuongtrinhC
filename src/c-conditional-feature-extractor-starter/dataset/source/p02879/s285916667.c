#include<stdio.h>
int main()
{
    int A,B,result;
    scanf("%d %d",&A,&B);
    result=A*B;
    if(A>=1 && B<=9)
    {
        printf("%d\n",result);
    }
    else{
        printf("-1\n");
    }

    return 0;

}
