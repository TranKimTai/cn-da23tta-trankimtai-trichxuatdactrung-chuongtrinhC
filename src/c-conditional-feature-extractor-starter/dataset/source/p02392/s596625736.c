#include <stdio.h>

int main(){

    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);

    if(a<0 || 100<a){
        return -1;
    }else{
        if(b<0 || 100<b){
            return -1;
        }else{
            if(c<0 || 100<c){
                return -1;
            }else{
                
                if(a<b && b<c){
                    printf("Yes\n");
                }else{
                    printf("No\n");
                }
            }
        }
    }
    return 0;
}