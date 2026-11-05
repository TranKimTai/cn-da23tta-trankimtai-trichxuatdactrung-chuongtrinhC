#include<stdio.h>

int main(void){
    int W,H,x,y,r,i,j;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    for ( i = ( x - r ) ; i <= ( x + r ) ; i++ ) {
        for ( j = ( y - r ) ; j <= ( y + r ) ; j++ ) {
            if ( i < 0 || i > W || j < 0 || j > H ) {
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
    return 0;
}
