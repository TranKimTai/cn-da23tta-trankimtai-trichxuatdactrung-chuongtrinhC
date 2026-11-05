#include<stdio.h>
int eval(int w, int h, int x, int y, int r){
    if (x-r <= 0) return 0;
    if (y-r <= 0) return 0;
    if (x+r >= w) return 0;
    if (y+r >= h) return 0;
    return 1;
}
int main(){
    int w, h, x, y, r;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
    int ret = eval(w, h, x, y, r);
    if (ret)
        puts("Yes");
    else
        puts("No");
    return 0;
}