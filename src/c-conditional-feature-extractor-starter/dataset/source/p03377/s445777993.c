#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,x;
    while(~scanf("%d %d %d",&a,&b,&x))
    {
        if(a>b)
            printf("NO\n");
        else
        {
            if(x>b)
                printf("NO\n");
            else
            {
                if(x<b)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        }
    }
    return 0;
}
