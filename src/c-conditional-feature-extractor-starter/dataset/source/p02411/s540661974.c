#include <stdio.h>
int main()
{
  int m, f, r ;

  while(1){
    scanf("%d %d %d",&m,&f,&r) ;
    if( m == -1 && f == -1 && r == -1 ){
      break ;
    }
    else{
      if( m == -1 || f == -1 ){
        printf("F\n") ;
      }else if( m + f < 30){
        printf("F\n") ;
      }else if( 80 <=  m + f ){
        printf("A\n") ;
      }else if( m + f < 80 && 65 <=  m + f ){
        printf("B\n") ;
      }else if( m + f < 65 && 50 <=  m + f ){
        printf("C\n") ;
      }else if( m + f < 50 && 30 <=  m + f ){
        if( 50 <= r ){
          printf("C\n") ;
        }else if( m + f < 50 && 0 <=  m + f ){
          printf("D\n") ;
        }
      }
    }
  }

  return 0 ;
}
