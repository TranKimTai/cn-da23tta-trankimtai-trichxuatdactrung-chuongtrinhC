#include <stdio.h>

int main(void){

    int m,f,r;
    int kei;

    while(1){
        scanf("%d %d %d",&m,&f,&r);
        if(m==-1 && f==-1 && r==-1){
            break;
        }
        kei=m+f;
        if(m==-1 || f==-1){
            printf("F\n");
        }else if(kei >=80){
            printf("A\n");
        }else if(kei >=65 && kei < 80){
            printf("B\n");
        }else if(kei >=50 && kei < 65){
            printf("C\n");
        }else if(kei >= 30 && kei < 50 && r>=50){
            printf("C\n");
        }else if(kei >= 30 && kei < 50){
            printf("D\n");
        }else if(kei < 30){
            printf("F\n");
        }
    }
}
