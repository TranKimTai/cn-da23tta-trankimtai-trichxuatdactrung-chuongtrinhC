#include <stdio.h>
int main(void){
    int W,H,x,y,r,n;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
        
    n=0;
    if(x+r>W)n=1;
    if(x-r<0)n=1;
    if(y+r>H)n=1;
    
    
    if(n == 0)
    printf("Yes\n");
    else 
    printf("No\n");
    
    return 0;
}

