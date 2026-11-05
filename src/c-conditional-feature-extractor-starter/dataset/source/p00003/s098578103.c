#include <stdio.h>
int main(void){
    int a, b, c;
    int i;
    
    for(i=0; i<3; i++){
        scanf("%d %d %d", &a,&b,&c);
        a*=a, b*=b, c*=c;
    
        if(a == b+c || b == a+c || c == a+b){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}

