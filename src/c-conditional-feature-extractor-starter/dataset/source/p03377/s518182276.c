#include <stdio.h>
int main(void){
int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(((c-a)<=b)&&(0<=(c-a)))
  {printf("YES");}
  else{printf("NO");}
return 0;
}