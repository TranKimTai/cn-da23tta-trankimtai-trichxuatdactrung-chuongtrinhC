#include <stdio.h>
 
int main(void)
{
 
int a, b, c, d;

    printf(" ");
    scanf("%d", &a);
    printf(" ");
    scanf("%d", &b);
    printf(" ");
    scanf("%d", &c);
    printf(" ");
    scanf("%d", &d);
    
if(0<=a&&a<b&&b<=100&&0<=c&&c<d&&d<=100)
{
    if(c<b)
    {
        if(b<d)
        {
            printf("%d", b-c);
        }
        else if(b>d)
        {
        printf("%d", d-c);
            
        }
    }
    else if(a<d)
    {
        if(b<c)
        {
            printf("%d", 0);
        }
        else if(c<b)
        {
            printf("%d", b-c);
        }
    }
    else if(a<c&&d<b)
    {
        if(d<a)
        {
            printf("%d", 0);
        }
        else if(a<d)
        {
        printf("%d", d-c);
        }
    }
    else if(c<a&&b<d)
    {
        if(b<c)
        {
            printf("%d", 0);
        }
        else if(c<b)
        {
           printf("%d", b-a);
        }
    }
    
}
else
{
    printf("error");
}
    
    
  return 0;
}
