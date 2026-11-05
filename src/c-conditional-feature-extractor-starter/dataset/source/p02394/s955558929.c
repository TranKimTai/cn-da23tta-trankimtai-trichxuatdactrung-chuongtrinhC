#include<stdio.h>
main(void){
	int W=0,H=0,x=0,y=0,r=0;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if(x+r>W||y+r>H){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
	return 0;
}