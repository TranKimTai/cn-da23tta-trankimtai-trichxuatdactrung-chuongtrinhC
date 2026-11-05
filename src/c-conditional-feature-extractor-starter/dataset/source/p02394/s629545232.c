#include<stdio.h>

int main(){
	
	int x,y,r;
	int W,H;
	
	scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
	
	if(x+r<W && y+r<H && x-r>0 && y-r>0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
}