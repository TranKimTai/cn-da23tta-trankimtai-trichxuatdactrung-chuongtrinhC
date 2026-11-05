#include<stdio.h>

int main(void){
    int S=0;
    int up=0,temp=0,down=0;
    scanf("%d",&S);
    temp=S/100;
    up=temp*100;
    down=S-up;
    if(up>1200){
        if(down>12||down<1){
            printf("NA\n");
        }
        else{
            printf("YYMM\n");
        }
    }
    else{
        if(down>12){
            printf("MMYY\n");
        }
        else if(up<1){
            printf("NA\n");
        }
        else{
            printf("AMBIGUOUS\n");
        }
    }
    
    return 0;
}