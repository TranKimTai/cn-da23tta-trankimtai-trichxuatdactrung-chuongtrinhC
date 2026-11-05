#include <stdio.h>

int main()
{
  int n, i, x, z;
 
  	if(scanf("%d", &n)== 1);
 
  if (n <= 81)  {
  	for( i=1; i<=9; ++i ){
  		if( n%i ==0 ){
          z = n/i;
          if(z <= 9){
    	 	++x;

            }
          
  		}
  	}
  }

    if(x >= 1){
      printf("Yes");
    }else{
      printf("No");
    }
  return 0;
}
