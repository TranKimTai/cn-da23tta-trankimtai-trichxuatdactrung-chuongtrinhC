#include<stdio.h>
int main(){
  int x,y,z,tr;
  scanf("%d %d %d",&x,&y,&z);
  x=x*x;
  y=y*y;
  z=z*z;
  if(x==y+z){
    printf("YES\n");
  }
  else if(y==x+z){
    printf("YES\n");
  }
  else if(z==x+y){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}