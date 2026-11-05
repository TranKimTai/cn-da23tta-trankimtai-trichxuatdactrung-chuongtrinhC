#include<stdio.h>

int main(void){
	int W,H,x,y,r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if(x<W-r&&y>H-r&&x>r&&y>r){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
	return 0;
}