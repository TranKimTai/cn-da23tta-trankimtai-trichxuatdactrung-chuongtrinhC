#include <stdio.h>
#include <string.h>


int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int s,e;
    if(a>c)s=a;
    else s=c;
    if(b>d)e=d;
    else e=b;
    if(e-s>0)printf("%d\n",e-s);
    else printf("0\n");


    return 0;
}
