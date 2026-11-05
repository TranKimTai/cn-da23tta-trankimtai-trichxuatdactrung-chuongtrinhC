#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int W, H, x, y, r;
    
    scanf("%d %d %d %d %d", &W,&H,&x,&y,&r);
    
    if (x+r > W || y+r > H) {
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    
    return 0;
}