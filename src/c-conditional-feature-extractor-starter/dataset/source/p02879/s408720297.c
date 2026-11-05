#include<stdio.h>
 
int main(void){
    int A,B,k;
    if(A<=9&&B<=9){
        k=A*B;
    }
    else {
        k='-1';
    }
    printf("%d",k);
    return 0;
}