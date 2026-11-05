#include <stdio.h>
int main(){

    int W,H,x,y,r;
    
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    
    if(W<x+r || H<y+r){
        
        printf("No\n");
        
    }else if(x-r<0 || y-r<0){
        
        printf("No\n");
        
    }else{
    
        printf("Yes\n");
        
    }
    
    
    return 0;
}