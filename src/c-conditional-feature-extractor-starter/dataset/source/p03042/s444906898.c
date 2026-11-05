#include<stdio.h>
int main(void){
    int a[4], b;
    scanf("%d", &b);
    a[3]=b%10;
    a[2]=b%100 - a[3];
    a[1]=b%1000 - 10*a[2]-a[3];
    a[0]=b-100*a[1]-10*a[2]-a[3];
    if((a[0]==0&&(a[1]<=9&&a[1]>=1))||(a[0]==1&&(a[1]<=2&&a[1]>=0))){
        if((a[2]==0&&(a[3]<=9&&a[3]>=1))||(a[2]==1&&(a[3]<=2&&a[3]>=0))){
            printf("AMBIGUOUS");
        }else{
            printf("MMYY");
        }
    }else if((a[2]==0&&(a[3]<=9&&a[3]>=1))||(a[2]==1&&(a[3]<=2&&a[3]>=0))){
        if((a[0]==0&&(a[1]<=9&&a[1]>=1))||(a[0]==1&&(a[1]<=2&&a[1]>=0))){
            printf("YYMM");
        }else{
            printf("AMBIGUOUS");
        }
    }else{
        printf("NA");
    }
    return 0;
}