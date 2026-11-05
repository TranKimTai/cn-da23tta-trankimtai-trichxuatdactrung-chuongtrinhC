#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m=0,f=0,r=0,x=0;
    while(1){
        scanf("%d %d %d",&m,&f,&r);
        if(m==-1 && f==-1 && r==-1){
            break;
        }else{
            x = m+f;
            if(m==-1 || f==-1){
                printf("F\n");
            }else if(x>=80){
                printf("A\n");
            }else if(x>=65 && x<80){
                printf("B\n");
            }else if(x>=50 && x<65){
                printf("C\n");
            }else if(x>=30 && x<50){
                if(r>=50){
                    printf("C\n");
                }else{
                    printf("D\n");
                }
            }else{
                printf("F\n");
            }
        }
    }
    return 0;
}