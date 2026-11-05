#include<stdio.h>

int main(){
        int a,b;
        scanf("%d %d", &a, &b);
        if(0<a && a<10 && 0<b && b<10) printf("%d\n", a*b);
        else printf("%d\n", -1);
        return 0;
}