#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
		printf("NO\n");
	else if((a==b&&a!=c)||(a==c&&b!=c)||(c==b&&a!=c))
		printf("YES");
	else
		printf("NO");
	return 0;
}
