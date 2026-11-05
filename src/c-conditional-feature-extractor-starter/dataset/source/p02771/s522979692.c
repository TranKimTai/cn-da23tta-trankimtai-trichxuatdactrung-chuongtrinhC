#include<stdio.h>
int main ()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(1<=a && a<=9 && 1<=b && b<=9 && 1<=c && c<=9){
if(a==b && a!=c & b!=c){
 
printf("Yes\n");
 
}
 
else if(a==c && a!=b & b!=c){
 
printf("Yes\n");
 
}
 
else if(b==c && a!=c & b!=c){
 
printf("Yes\n");
 
}
 
else{
 
printf("No\n");
 
}
}
return 0;
}
  