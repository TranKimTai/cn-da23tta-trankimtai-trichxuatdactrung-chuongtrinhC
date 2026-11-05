#include <stdio.h>
int main()
{
    int A , B ;
    scanf("%d %d",&A,&B);
    A*B ;
    if (1<=A && A<=9 && 1<=B && B<=9){
        printf("A*B\n");
    }
    else {
        printf("-1\n");
    }
    return 0;
}

