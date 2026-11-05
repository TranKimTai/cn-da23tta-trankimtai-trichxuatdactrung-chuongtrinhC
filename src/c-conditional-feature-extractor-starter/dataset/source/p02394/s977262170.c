#include <stdio.h>

int main(void) {
	int W,H,x,y,r,i;
	scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
	i=0;
	if(H<(y+r))i=1;
	if(W<(x+r))i=1;
	if(0>(y-r))i=1;
	if(0>(x-r))i=1;
	if(i==0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}

