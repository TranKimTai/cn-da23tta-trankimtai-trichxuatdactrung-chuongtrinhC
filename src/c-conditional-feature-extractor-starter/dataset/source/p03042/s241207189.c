#include<stdio.h>

int main(void){
    int a,x,y;
    scanf("%d",&a);
    x = a/100;
    y = a%100;
    if( 0<x && x<13 && 0<y && y<13){
        printf("AMBIGUOUS");
    }else if( (x>12&& 0<y && y<13) || (x==0 && 0<y && y<13) ){
        printf("YYMM");
    }else if(0<x && x<13){
        printf("MMYY");
    }else{
        printf("NA");
    }
    return 0;
}
