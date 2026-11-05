#include<stdio.h>
int main(){
    int W,H,x,y,r;
    scanf("%d %d %d %d %D",&W,&H,&x,&y,&r);
    if(x-r<0||y-r<0||x+r>W||y+r>H){
        printf("NO\n");
    }else{
        printf("Yes\n");
    }
    return 0;
}