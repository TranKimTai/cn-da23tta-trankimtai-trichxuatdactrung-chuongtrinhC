#include<stdio.h>
int main(void)
{
  int a,b,x;
  scanf("%d%d%d",&a,&b,&x);
  if(a+b>=x){
    if(a<=x){
      puts("YES");
      return 0;
    }
  }
  puts("NO");
  return 0;
}
