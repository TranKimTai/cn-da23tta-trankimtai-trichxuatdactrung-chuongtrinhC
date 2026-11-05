#include <stdio.h>

int main(int argc, const char * argv[]) {
    int W,H,x,y,r,a,c;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    a = x-r;
    c = x+r;
    if(a<0){
        printf("No\n");
    }else if(c<=W){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
