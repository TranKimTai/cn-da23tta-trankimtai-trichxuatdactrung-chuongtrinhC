#include<stdio.h>
 
int main(){
 int a,b,v;
 scanf("%d %d",&a,&b);
 v=a-b;
 if( v){
   if(v<0) printf("%d<%d\n",a,b);
   else    printf("%d>%d\n",a,b);
 }else{
   printf("%d=%d\n",a,b);
}
 return 0;
}