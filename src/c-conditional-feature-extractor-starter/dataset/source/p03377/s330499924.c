#include<stdio.h>
int main ()
{
    int A,B,X;
    scanf("%d %d %d",&A,&B,&X);
    if((B-(X-A))>0&& X>=A){
        printf("Yes");
    }
    else{
        printf("No");
    }



}
