#include <stdio.h>

int main(void) {
    int m,f,r,m1,f1,r1;
    while(1){
        scanf("%d %d %d", &m1,&f1,&r1);
        if(m1==-1&&f1==-1&&r1==-1)
        break;
        if(m1==-1){
            m=0;
        }else{
            m = m1;
        }
        if(f1==-1){
            f=0;
        }else{
            f = f1;
        }
        if(r1==-1){
            r=0;
        }else{
            r = r1;
        }
        
        if((m+f)>=80){
            printf("A\n");
        }
        if((m+f)<80 && (m+f)>=65 && m!=0 && f!=0){
            printf("B\n");
        }
        if((m+f)<65 && (m+f)>=50 && m!=0 && f!=0){
            printf("C\n");
        }
        if((m+f)<50 && (m+f)>=30 && m!=0 && f!=0){
            if(r>=50){
                printf("C\n");
            }else{
            printf("D\n");
            }
        }
        if((m+f)<30 || m==0 || f==0){
            printf("F\n");
        }
    }
    
    return 0;
}