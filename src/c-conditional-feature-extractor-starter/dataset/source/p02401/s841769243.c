#include<stdio.h>

int main(){
  int a,b,x;
  char op;
  for(x=1;x>0;x++){
      scanf("%d %c %d",&a,&op,&b);
    if(op =='+'){
       printf("%d\n",a+b);
     } else if(op =='-'){
       printf("%d\n",a-b);
     } else if(op =='*'){
       printf("%d\n",a*b);
     } else if(op =='/'){
       printf("%d\n",a/b);
     } else if(op =='?'){
       break;
     }      
   }
   return 0;
}
