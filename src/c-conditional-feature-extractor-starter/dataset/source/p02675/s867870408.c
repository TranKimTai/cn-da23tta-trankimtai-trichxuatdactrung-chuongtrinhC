#include<stdio.h>

int main(){
        int n, wa;

        scanf("%d", &n);

        while(wa>=10){
                wa=wa%10;
        }

        if(wa==0||wa==1||wa==6||wa==8){
                printf("pon");
        }else if(wa==3){
                printf("bon");
        }else{
                printf("hon");
        }

        return 0;
}
