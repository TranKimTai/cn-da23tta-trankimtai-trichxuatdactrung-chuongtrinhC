#include<stdio.h>

int main(void){
    int a,b;
  
    scanf("%d%d",&a,&b);
  
    if(1 <= a < 10 && 1 <= b < 10) printf("%d\n",a * b);
    else printf("-1\n");
    return 0;
}    
    