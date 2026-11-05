#include<stdio.h>
int main()
{int a,b,x,y,n,i;
   scanf("%d%d%d%d",&a,&b,&x,&y);
    if(x>b)
      printf("0");
      else
	   if(a<=x)
	     {if(b<=y)
	       printf("%d",b-x);
	      else
	       printf("%d",y-x);
	     }
	        if(a>x)
			{if(b<=y)
			  printf("%d",b-a);
			  else
			  printf("%d",y-a);
				}    
 } 
 