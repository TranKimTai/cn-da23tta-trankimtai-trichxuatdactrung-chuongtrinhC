#include<stdio.h>
 
int main()
{
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if (W>=x+r && H>=y+r && r<=x && r<=y && x>=0 && y>=0){
        printf("Yes\n");}
        else {
            printf("No\n");}
             
    return 0;
}
