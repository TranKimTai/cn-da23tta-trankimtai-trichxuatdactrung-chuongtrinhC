#include<stdio.h>
int main(){
    int S;
    scanf("%d",&S);
    
    int a = S/100; //上2桁
    int b = S%100; //下2桁
    
    if(1 <= a && a <= 12 && 1 <= b && b <= 12){
        printf("AMBIGUOUS\n");
        return 0;
    }
    if(a == 0 || a > 12){ //YYMM
        if(1 <= b && b <= 12) printf("YYMM\n");
        else printf("NA\n");
        return 0;
    }
    if(b == 0 || b > 12){ //MMYY
        if(1 <= a && a <= 12) printf("MMYY\n");
        else printf("NA\n");
        return 0;
    }
    return 0;
}
