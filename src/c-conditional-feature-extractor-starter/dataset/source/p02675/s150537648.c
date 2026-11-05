#include<stdio.h>

int main(){
        int i, n, wa;

        scanf("%d", &n);

        for(i=0; i<n; i++){
                wa=wa%10;
                if(wa<10)
                        break;
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
