#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,s;
    scanf("%d %d",&x,&y);
    if(x>=10||y>=10)
        s = -1;
    else
        s = x*y;
    printf("%d",s);
    return 0;
}
