#include <stdio.h>
int main()
{
int N,i,j;
scanf("%d", &N);
for(i=1;i<=9;i++){
	for(j=1;j<=9;j++){
		if(N==i*j){
			puts("Yes");
			return 0;
        }
	}
}
puts("No");
}