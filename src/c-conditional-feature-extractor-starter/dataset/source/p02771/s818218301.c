#include <stdio.h>
int main(){
    int a,b,c;
  
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b!=c){
        printf("Yes");
    }else if(c==b && b!=a){
        printf("Yes");
    }else if(c==a && b!=a){
        printf("Yes");
    }else{
        printf("No");
    }
    
    return 0;
}
