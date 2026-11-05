#include<stdio.h>
int main(void){
 int n;
  scanf("%d",&n);
  switch(n%10){
    case 0:
    case 1:
    case 6:
    case 8:puts("pon");break; 
    case 3: puts("bon");break;
    default:puts("hon");
  }
  return 0;
}
