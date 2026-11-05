#include <stdio.h>
 
int main()
{
 
  /* 数値（整数） */
int a, b, c, d;


printf("");
scanf("%d %d %d %d", &a, &b, &c, &d);
    
if(0<=a&&a<b&&b<=100&&0<=c&&c<d&&d<=100)
{
    if(c<b)
    {
        printf("%d", b-c);
      
    }
    else if(a<d)
    {
        printf("%d", d-a);
    }
    else if(a<c&&d<b)
    {
        printf("%d", d-a);
    }
    else if(c<a&&b<d)
    {
        printf("%d", d-a);
    }
    else if(b<c||d<a)
    {
        printf("0");
    }
    
    
}
else
{
    printf("error");
}
    
 
    
    
  return 0;
}
