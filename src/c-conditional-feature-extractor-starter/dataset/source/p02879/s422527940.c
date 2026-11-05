#include<stdio.h>
int main()
{
    int A,B,m;
    scanf("%d %d",&A,&B);
    if (A>=1 && A<=9 && B>=1 && B<=9) {
        m=A*B;
        printf("%d\n",m);
    }
    else {
        printf("-1\n");
    }
    return 0;
}
