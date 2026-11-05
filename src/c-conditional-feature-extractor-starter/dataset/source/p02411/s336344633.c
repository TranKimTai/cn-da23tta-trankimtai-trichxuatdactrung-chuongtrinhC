#include <stdio.h>
int main(void){
    
    int m, r, f;
    int sum;
    while(1){
        scanf("%d %d %d\n", &m, &r, &f);
        if(m == -1 && r == -1 && f == -1) break;
        if(m == -1 || r == -1){
            printf("F\n");
        }
        
        sum = m + r;
        
        if(80 <= sum) printf("A\n");
        if(65 <= sum && sum < 80) printf("B\n");
        if(50 <= sum && sum < 65) printf("C\n");
        if(30 <= sum && sum < 50 && 50 <= f) printf("C\n");
        else if(30 <= sum && sum < 50 && f < 50) printf("D\n");
        if(sum < 30) printf("F\n");
    }
    
    
    return 0;
    
}