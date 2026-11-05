#include<stdio.h>
int main (void)
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A>=1 && A<=9 && B>=1 && B<=9){
    printf("%d",A*B);
	}
    else{
    printf("-1");
	}
    return 0;
}