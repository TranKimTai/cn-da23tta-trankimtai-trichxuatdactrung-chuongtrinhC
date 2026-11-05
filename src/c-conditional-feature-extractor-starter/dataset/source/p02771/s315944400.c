#include <stdio.h>
int main(){
  int X,Y,Z;
    scanf("%d %d %d",&X,&Y,&Z);
   if(2*X==Y+Z){
    printf("No\n");
   }else if(X==Y||X==Z||Y==Z){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}