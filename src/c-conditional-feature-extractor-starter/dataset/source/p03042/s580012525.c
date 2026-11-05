//YYMM or MMYY
#include<stdio.h>
int main(){
    int s,a,b;

    //4桁の入力
    scanf("%d",&s);

    //先頭2桁
    a=s/100;

    //後2桁
    b=s%100;

    if((a<=12&&a>0)&&b>0){
        if(b<=12){
            printf("AMBIGUOUS\n");
        }else{
            printf("MMYY\n");
        }
    }else if(a>0&&b>0){
        if(b<=12){
            printf("YYMM\n");
        }else{
            printf("NA\n");
        }
    }else{
        printf("NA\n");
    }

    return 0;
}