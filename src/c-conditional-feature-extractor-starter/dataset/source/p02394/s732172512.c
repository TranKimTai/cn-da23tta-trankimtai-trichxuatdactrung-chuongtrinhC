#include<stdio.h>

int main(){
    int W,H,x,y,r;
    printf("W H x y r");
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

    if(x+r>W){
		printf("Yes\n");
	}if(y+r>H){
		printf("Yes\n");
    }if(r>x){
		printf("Yes\n");
    }if(r>y){
		printf("Yes\n");
    }else{ printf("No\n");
	}
    return 0;
}
