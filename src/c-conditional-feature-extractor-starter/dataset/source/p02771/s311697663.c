#include <stdio.h>

int main(void)
{
        int a,b,c,s=0;

        scanf("%d%d%d",&a,&b,&c);

        if(a==b) s++;
        if(a==c) s++;
        if(b==c) s++;

        if(s==1) printf("Yes\n");
        else printf("No\n");
        return 0;
}
