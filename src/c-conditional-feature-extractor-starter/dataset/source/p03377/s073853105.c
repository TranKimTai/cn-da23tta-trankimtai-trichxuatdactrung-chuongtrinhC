#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,m,i,a;
    while(~scanf("%d %d %d",&n,&m,&a))
    {
        for(i=1;i<=m;i++)
        {
            if(n+i==a||m==a||n==a)
            {
                printf("YES\n");
                break;
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
    }
    return 0;
}
