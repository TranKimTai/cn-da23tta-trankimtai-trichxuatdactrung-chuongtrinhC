#include <stdio.h>
#include <stdlib.h>
int main()
{
        int a,b,c,d,j,k;
        while(~scanf("%d%d%d%d",&a,&b,&c,&d))
        {
            j=(a>=c)?a:c;
            k=(b>=d)?d:b;
            if(k-j>=0)
                printf("%d\n",k-j);
            else
                printf("0\n");
        }
        return 0;
}
