#include<stdio.h>
int main(void){
    int m=0, f=0, r=0;
    while(!(m == -1 && f == -1 && r == -1)){
        scanf("%d %d %d", &m, &f, &r);
        if(m + f >= 80) printf("A\n");
        else if(65 <= m + f && m + f <= 79) printf("B\n");
        else if(50 <= m + f && m + f <= 64) printf("C\n");
        else if(30 <= m + f && m + f <= 49){
            if(r >= 50) printf("C\n");
            else printf("D\n");
        }
        else if(m + f < 30) printf("F\n");
        
    }
    return 0;
}