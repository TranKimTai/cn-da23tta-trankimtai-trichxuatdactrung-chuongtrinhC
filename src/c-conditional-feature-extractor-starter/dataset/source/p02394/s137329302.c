#include <stdio.h>
int main(int argc,const char * arg[]){
int W,H,x,y,r;
int c1,c2;
         scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if(W < x+r || 0 > x-r){
         printf("No\n");
    }else{
         c1 = 1;
    }
    if(H < y + r || 0 > y - r){
         printf("No\n");
    }else{
         c2 = 1;
    }
   if(c1 == 1 && c2 == 1){
        printf("Yes\n");
   }
return 0;
}