#include <stdio.h>
int main()
{
 int A,B,C,D;
 int a,s,d,f,g=0;
 scanf("%d %d %d %d",&A,&B,&C,&D);
 if(B<C||D<A)
 printf("%d",g);
 else 
 if(A<C&&B<D) printf("%d",B-C);
else 
 if(B>D&&A<C) printf("%d",D-C);
else
if(B>D&&A>C)  printf("%d",D-A);
else printf("%d",B-A); 
  
	return 0;
}