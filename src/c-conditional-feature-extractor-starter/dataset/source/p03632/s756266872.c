#include <stdio.h>


int main(void){
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(A<=D&&C<=B){
        int po1;
        if(A>C)po1=A;
        else po1=C;
        int po2;
        if(B<D)po2=B;
        else po2=D;
        printf("%d",po2-po1);
    }
    else printf("0");
    return 0;
}
