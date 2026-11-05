#include<stdio.h>
int main(){
	int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  int start=a,end=b;
  if(a<c)
    start=c;
  if(b>d)
    end=d;
  int ans=0;
  if(end-start>0)
    ans=end-start;
  printf("%d",ans);
}