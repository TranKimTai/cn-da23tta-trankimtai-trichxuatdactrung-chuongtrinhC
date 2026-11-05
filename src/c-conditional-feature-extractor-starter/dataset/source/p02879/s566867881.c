#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int n, x = 0, y = 0;
    bool can = false;
    scanf("%d", &n);
    for(int i = 1; i <= 9; i++){
        x = n / i;
        y = x * i;
        if( 1 <= x && x <= 9 && y == n){
            can = true;
            break;
        }  
    }
    if(can){
        printf("YES");
    }else{
        printf("NO");
    }

}