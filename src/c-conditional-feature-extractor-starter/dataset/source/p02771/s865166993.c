#include <stdio.h>
int main(void)
{
          int a , b , c ;
          scanf("%d" , &a ) ;
          scanf("%d" , &b) ;
          scanf( "%d" , &c) ;
           if ((a == b && a != c)||
                    (a == c && a!=b ) ||
                    (b == c && b!= a))
          {
                    printf("Yes") ;
          }
          else printf("No") ;

                    return 0 ;
}
