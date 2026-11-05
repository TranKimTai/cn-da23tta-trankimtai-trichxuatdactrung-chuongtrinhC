#include<stdio.h>

int main(void)
{
    int s;
    scanf("%d",&s);
    int flont,back;

    flont=s/100;
    back=s%100;

    if(flont==0 || back==0){
        puts("NA");
    }else if(1<=flont && flont<=12){
        if(1<=back && back<=12){
            puts("AMBIGUOUS");
        }else{
            puts("MMYY");
        }
    }else{
        if(1<=back && back<=12){
            puts("YYMM");
        }else{
            puts("NA");
        }
    }

    return 0;
}