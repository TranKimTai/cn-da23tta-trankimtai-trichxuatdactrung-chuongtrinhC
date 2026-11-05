#include <stdio.h>

#define MAX_DATA 50

typedef struct {
    int m;
    int f;
    int r;
} SCORE;

int main(void)
{
    SCORE scores[MAX_DATA] = {};
    int i;
    
    for(i = 0; i < MAX_DATA; i++) {
        scanf("%d %d %d", &scores[i].m, &scores[i].f, &scores[i].r);
        if(scores[i].m == -1 && scores[i].f == -1 && scores[i].r == -1) {
            break;
        }
    }
    
    for(i = 0; ; i++) {
        if(scores[i].m == -1 && scores[i].f == -1 && scores[i].r == -1) {
            break;
        }
        
        int sum = scores[i].m + scores[i].f;
        if(scores[i].m == -1 || scores[i].f == -1) {
            printf("F\n");
        } else if(sum >= 80) {
            printf("A\n");
        } else if(sum >= 65 && sum < 80) {
            printf("B\n");
        } else if(sum >= 50 && sum < 65) {
            printf("C\n");
        } else if(sum >= 30 && sum < 50) {
            if(scores[i].r >= 50) {
                printf("C\n");
            } else {
                printf("D\n");
            }
        } else if(sum < 30) {
            printf("F\n");
        }
    }
    
    return 0;
}
