#include <stdio.h>

int main(){
    
    int a,b,c;
    
    scanf("%d%d%d", &a, &b, &c);
    
    if ((a!=b && a!=c && c!=b) || (a==b && a==c)){
        printf("No\n");
    } else {
        printf("Yes\n");
    }

    return 0;
}