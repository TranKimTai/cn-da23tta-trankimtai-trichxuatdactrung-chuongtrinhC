#include <stdio.h>
int W,H,x,y,r;

main(){
 scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);

 if(x+r>=W){
 printf("No\n");
 }
 else if(y+r>=H){
 printf("No\n");
 }
 
 
 
 
 
 else{printf("Yes\n");}


return 0;
}