#include <stdio.h>

int main() {

    int i;
    int ans[10]={0};
    int a;

    for(i = 0; i < 3; i++) {
        scanf("%d", &a);
        ans[a]++;
    }
    for(i = 1; i <= 9; i++) {
        if(ans[i] == 2) {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    
    return 0;
}