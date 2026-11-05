#include <stdio.h>

int main(int argc, const char * argv[]) {
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if (0 <= x-r && W >= x+r){
        printf("Yes\n");
    } else if (0 > x-r || W < x+r ) {
        printf("No\n");
    }
    return 0;
}