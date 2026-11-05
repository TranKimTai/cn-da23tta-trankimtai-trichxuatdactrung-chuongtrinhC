#include<stdio.h>
int main(){int W,H,x,y,r;
scanf("%d%d%d%d%d", &W,&H,&x,&y,&r);if(W-x+r>=0&&W+x-r<W&&H-y+r>=0&&H+y-r<H)puts("Yes");puts("No");return 0;
}