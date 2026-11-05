/*9*9*/
#include<stdio.h>
int main(void)
{
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  if(a>9||b>9){
    printf("-1\n");
  }
  else{
    printf("%d\n",a*b);
  }return 0;
}