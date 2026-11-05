#include <stdio.h>
int main(void)
{
  int a,b,c,i=0;
  //printf("整数A,B,Cを入力してください(A,B,Cはいずれも 1以上 9以下の整数)");
  do{
    scanf("%d",&a);
  }while(a<1 || 9<a);
  do{
    scanf("%d",&b);
  }while(b<1 || 9<b);
  do{
    scanf("%d",&c);
  }while(c<1 || 9<c);
  if(a==b)
    i++;
  if(b==c)
    i++;
  if(c==a)
    i++;
  if(i==1)
    printf("Yes\n");
  else
    printf("No\n");
  
  return 0;
}