#include<stdio.h>

int main(void){
    int w, h, x, y, r;
    scanf("%d%d%d%d%d", &w, &h, &x, &y, &r);
    if(r<=x && (w-r)>=x)
        if(r<=y && (h-r)>=y){
            printf("Yes\n");
            return 0;
        }
    printf("No\n");
    return 0;
}
