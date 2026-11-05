#include<stdio.h>

int main(void){


int w,h,x,y,r;


scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);


if(x>=-100&&x<=100&&y>=-100&&y<=100&&w>0&&w<=100&&h>0&&h<=100&&r>0&&r<=100){


if(x-r>0&&x+r<w&&y-r>0&&y+r<h){


printf("Yes\n");


}


else{


printf("No\n");


}


}


return 0;


}