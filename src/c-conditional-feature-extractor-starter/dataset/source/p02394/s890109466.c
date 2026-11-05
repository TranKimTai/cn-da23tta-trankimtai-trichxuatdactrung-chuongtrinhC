#include <stdio.h>
int main(void){
    int x,y,r;
    int W,H;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if(x-r<0||y-r<0||x+r>W||y+r>H){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    return 0;
}