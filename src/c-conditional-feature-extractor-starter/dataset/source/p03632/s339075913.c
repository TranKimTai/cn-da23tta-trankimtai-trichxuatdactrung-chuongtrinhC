#include <stdio.h>
int main(void)
{
    int a,b,c,d,n;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<=c && d<=b)
      printf("%d",(d-c));
    else if(c<=a && b<=d)
      printf("%d",(b-a));
    else if(a<=c)
    {
        n=b-c;
        if(n<1)
          printf("0");
        else
          printf("%d",n);
    }
    else
    {
        n=d-a;
        if(n<1)
          printf("0");
        else
          printf("%d",n);
    }
}
