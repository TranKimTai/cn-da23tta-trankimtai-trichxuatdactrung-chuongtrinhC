#include <stdio.h>
int main(void)
{
    int a,b,c,d,i,s,g,t=0;
    
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<c) s=a;
    else s=c;
    if(b>d) g=b;
    else g=d;
    for(i=s;i<=g;i++)
        if(((a<=i)&&(i<b))&&((c<=i)&&(i<d)))
            t++;
    printf("%d\n",t);
    return 0;
}