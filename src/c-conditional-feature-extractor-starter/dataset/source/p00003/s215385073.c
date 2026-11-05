#include <stdio.h>
int main(void){
   int n;
   int i,j;
   int e[3];
   long int sum;
   int tem=0;
   
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d %d %d",&e[0],&e[1],&e[2]);
       sum=e[0]*e[0]+e[1]*e[1]+e[2]*e[2];
       
       for(j=0;j<3;j++){
           if(e[j]*e[j]==sum/2){
               printf("Yes\n");
               tem+=1;
           }
       }
       if(tem==0){
            printf("No\n");
       }
       tem=0;
   }
       
    return 0;       
}
    


