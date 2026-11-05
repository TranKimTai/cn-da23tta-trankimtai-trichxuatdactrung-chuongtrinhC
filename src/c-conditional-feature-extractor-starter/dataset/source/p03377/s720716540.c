#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,n,m,a,b,c;
    while(~scanf("%d %d %d",&n,&m,&x))
    {
        if(x>=n&&x<=n+m)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
