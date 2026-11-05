#include <stdio.h>

main() {
	int a,b,c,N,i;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b){
			printf("YES\n");
		}else printf("NO\n");
	}
	return 0;
}
