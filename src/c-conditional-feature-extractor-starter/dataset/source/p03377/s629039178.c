#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,i,a;
    while(~scanf("%d %d %d",&x,&y,&z))
    {
        a=0;
        if(x<=z)
        {
            for(i=0;i<=y;i++)
            {
                if(x+i==z)
                {
                    a=1;
                }
            }
        }
        if(a==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
