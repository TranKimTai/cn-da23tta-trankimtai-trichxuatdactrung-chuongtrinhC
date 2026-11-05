#include <stdio.h>
int main() 
{ 
   int A,B,m;
   scanf("%d%d",&A,&B);
   
   if (A>9 || B>9)
    {
    m=-1;
    printf("%d",m);
    }
    else{
    m=A*B;
    printf("%d",m);
     }
   
 return 0;
}