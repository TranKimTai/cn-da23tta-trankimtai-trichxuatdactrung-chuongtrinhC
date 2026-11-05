#include <stdio.h>

int main()
{

    int m, f, r, sum;

    while(1){
        scanf("%d %d %d", &m, &f, &r);

        if(m+f+r == -3){break;}

        sum = m + f;    
    
        if(m == -1 || f == -1 || sum < 30){
            printf("F\n");
        }
        else if(sum >= 80){
            printf("A\n");
        }
        else if(sum >= 65 && sum < 80){
            printf("B\n");
        }
        else if(sum >= 50 && sum < 65){
            printf("C\n");
        }
        else if(sum >= 30 && sum < 50){
            if(r >= 50){
                printf("C\n");
            }
            else{
                printf("D\n");
            }
        }
    }
    return 0;
}
        

         