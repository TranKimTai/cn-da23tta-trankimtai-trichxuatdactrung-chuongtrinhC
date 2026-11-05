#include <stdio.h>

int main(){
    
    int m, f, r;
    int count = 0;
    int total[count];
    
    while(1){
        scanf("%d %d %d", &m, &f, &r);
        total[count] = m + f + r;
        count++;
        if(m == -1 && f == -1 && r == -1) break;
    }

    int i;
    for(i = 0;i < count;i++){
        if(total[i] >= 80){
            printf("A\n");
        }
        if(total[i] < 80 && total[i] >= 65){
            printf("B\n");
        }
        if(total[i] < 65 && total[i] >= 50){
            printf("C\n");
        }
        if(total[i] < 50 && total[i] >= 30){
            printf("D\n");
        }
        if(total[i] < 30){
            printf("F\n");
        }
    } 
    return 0;
}

