#include <stdio.h>

int main(void){
    
    int n;
    int i;
    int flag;
    
    flag=0;
    scanf("%d\n", &n);
    int array[n];
    
    for(i=0;n>i;i++){
        scanf("%d",&array[i]);
            if(0==array[i]%2){
                if((0==array[i]%3)||(0==array[i]%5)){
                    flag=1;
                }
                else{
                    printf("DENIED");
                    return 0;
                }
            }
    }
    if(1==flag){
        printf("APPROVED");
    }else if(0==flag){
        printf("DENIED");
    }
}

