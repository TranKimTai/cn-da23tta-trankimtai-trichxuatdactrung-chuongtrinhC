#include <stdio.h>
int main(void){
    int m, f, r, sum;
    
    while(1){
        scanf("%d %d %d\n", &m, &f, &r);
        sum = m + f;
        
        if(m<0 && f<0 && r<0){
            break;
        }
        
        if(m<0 || f<0){
            printf("F\n");
        }else if(80 <= sum){
            printf("A\n");
        }else if(65 <= sum && sum < 80){
            printf("B\n");
        }else if(50 <= sum && sum < 65){
            printf("C\n");
        }else if(30 <= sum && sum < 50){
            if(r <= 50){
                printf("C\n");
            }else{
                printf("D\n");
            }
        }else{
            printf("F\n");
        }
    }
    return 0;
}
