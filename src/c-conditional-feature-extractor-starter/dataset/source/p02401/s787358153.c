#include<stdio.h>

int main(){
    int a,b;
    char c;
    int f = 1;
    
    while(f){
        scanf("%d %c %d", &a, &c, &b);
        int ans;
        
        switch (c){
            case '+':
                ans = a+b;
                printf("%d\n", ans);
                break;
                
            case '-':
                ans = a-b;
                printf("%d\n", ans);
                break;
            
            case '*':
                ans = a*b;
                printf("%d\n", ans);
                break;
            
            case '/':
                ans = a/b;
                printf("%d\n", ans);
                break;
            
            case '?':
                f = 0;
                break;
            
        }
        
    }
    
    return 0;
}
