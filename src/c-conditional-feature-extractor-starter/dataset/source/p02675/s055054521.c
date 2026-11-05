#include <stdio.h>

int main(void)
{
        int n,s;

        scanf("%d",&n);

        s=(n%100)%10;

        if(s==3) printf("bon");
        else if(s==0 || s==1 || s==6 || s==8) printf("pon");
        else printf("hon");

        return 0;
}
