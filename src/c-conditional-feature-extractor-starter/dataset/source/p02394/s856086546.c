#include<stdio.h>
int main(void){
	int w,h,x,y,r;
  scanf("%d %d %d %d %d",&w, &h, &x, &y, &r);

  if(w-x>=r && x>=r && h-y>=r && y>=r){
    printf("Yes\n");
  }
	else{
		printf("No\n");
	}
	return 0;
}