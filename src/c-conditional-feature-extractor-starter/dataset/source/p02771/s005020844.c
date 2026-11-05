#include  <stdio.h>


int main(void)
{
   int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>=10 || b>=10 || c>=10|| a<=0||b<=0||b<=0)
       return 0;
    
    if(a == b && a != c)
    {
        printf("Yes");
    }
    
    else if(a == c && a != b)
    {
        printf("Yes");
    }
    
    else printf("No");
    
    
    
   
        
    return 0;
}