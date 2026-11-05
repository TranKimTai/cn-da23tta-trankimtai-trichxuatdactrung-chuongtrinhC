#include <stdio.h>
int main(void){
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a==b && b==c ){
  printf("NO");
}else if(a!=b &&b!=c){
  printf("NO");
}else{
  printf("YES");
}
return 0;
}
