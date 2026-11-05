#include<stdio.h>
int main(){
int a,b,c,d,m,n;
scanf("%d %d %d %d",&a,&b,&c,&d);
judge(a);
judge(b);
judge(c);
judge(d);
if(b>c&&b<d)
    printf("%d",b-c);
if(b<=c)
    printf("0");
if(b>d)
    printf("%d",d-c);
return 0;
}
int judge(int q)
  {
   if(0<q&&q<100) return q;
   else return 0;
  }