

#include <stdio.h>

int main(){


	int m, f, r, sum;
	

	while(1){
	
		scanf( "%d %d %d", &m, &f, &r );

		if( m==-1 && f==-1 && r==-1 )
			break;

		sum = m + f;

		if( m == -1 || f == -1 ) printf( "F\n" ); 
		else if(sum >= 80) printf( "A\n" );
		else if(65 <= sum && sum < 80 ) printf( "B\n" );
		else if(50 <= sum && sum < 65 ) printf( "C\n" );
		else if(30 <= sum && sum < 50 ){
			if( 50 < r )	printf( "C\n" );
			else printf( "D\n" );
		}
		else if( 30 > sum ) printf( "F\n" );
	}


	return 0;


}