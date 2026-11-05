#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
if(a>c){printf("NO\n");}
  else if(a+b<c){printf("NO\n");}
  else{printf("YES\n");}
    return 0;
}