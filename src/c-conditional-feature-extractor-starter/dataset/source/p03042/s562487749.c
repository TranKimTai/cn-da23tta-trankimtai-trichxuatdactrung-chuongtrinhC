#include <stdio.h>
int main(void){
    int n,m1,m2;
    scanf("%d",&n);
    m1 = n/100;
    m2 = n%100;
    if(m1>0 && m1<13){
        if(m2>0 && m2<13) printf("AMBIGUOUS");
        else printf("MMYY");
    }
    else{
        if(m2>0 && m2<13) printf("YYMM");
        else printf("NA");
    }
}