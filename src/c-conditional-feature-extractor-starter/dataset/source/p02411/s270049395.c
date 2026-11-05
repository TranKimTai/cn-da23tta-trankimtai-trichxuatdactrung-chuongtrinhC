#include<stdio.h>

int main(void){
        char rank[] = {'A', 'B', 'C', 'D', 'F'};
        while(1){
                int m, f, r;
                scanf("%d %d %d", &m, &f, &r);
                if(m<0 && f<0 && r<0) break;
                int sm = m+f;

                int x = (sm<80) + (sm<65) + (sm<50) + (sm<30);
                if(x==3 && r>=50) x = 2;
                if(m<0 || f<0) x = 4;
                printf("%c\n", rank[x]);
        }
        return 0;
}
