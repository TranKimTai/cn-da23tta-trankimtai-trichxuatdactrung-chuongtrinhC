#include <stdio.h>    
int main()
{
	int a;
	int i;
	int x, y, z;
	int max, M, N;
	
	scanf("%d",&a);
	for(i = 0; i < a; i++){
		scanf("%d %d %d",&x ,&y ,&z);
		if(x > y && x > z){
			max = x;
			M = y;
			N = z;
		}
		else if(y > x && y > z){
			max = y;
			M = x;
			N = z;
		}
		else{
			max = z;
			M = x;
			N = y;
		}
		if(max*max == M*M + N*N)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}