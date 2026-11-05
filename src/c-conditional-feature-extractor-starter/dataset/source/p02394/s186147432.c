#include<stdio.h>
int main (void){

int W,H,x,y,r;

scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

  if(W<(x+r))printf("No\n");
  else if((x-r)<0) printf("No\n");
  else if((x-r)>0&&(x+r)<W&&H>(y+r)) printf("Yes\n");
  else if(H<(y+r))printf("No\n");
  else if((y-r)<0)printf("No\n");
  else if((y-r)>0&&(y+r)<H&&W>(x+r))printf("Yes\n");







return 0;
}