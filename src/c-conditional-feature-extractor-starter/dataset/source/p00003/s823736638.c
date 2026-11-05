#include<stdio.h>

int main(){
    int h,w,s;
    scanf("%d",&s);
    while(scanf("%d %d %d",&h,&w,&s)!=-1) if((h%3==0&&w%4==0&&s%5==0)||(h%5==0&&w%4==0&&s%3==0)||(h%3==0&&w%5==0&&s%4==0)||(h%5==0&&w%3==0&&s%4==0)||(h%4==0&&w%3==0&&s%5==0)||(h%4==0&&w%5==0&&s%3==0))printf("Yes\n");else printf("No\n");
    return 0;
}