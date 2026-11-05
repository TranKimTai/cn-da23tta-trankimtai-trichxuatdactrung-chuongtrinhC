#include<stdio.h>
int main(void){

int W,H,x,y,r;

scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

if(x+r < W && y+r < H){
	printf("YES\n");
	}
else{
	printf("NO\n");
	}
return 0;
}

