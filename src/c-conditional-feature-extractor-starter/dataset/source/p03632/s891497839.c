#include<stdio.h>
int main(){
int a,b,c,d,m;
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a<c)
    if(b<d)
      if(b>c) 
        m=b-c;
      else m=0;
    else m=d-c;
else
    if(b>d)
      if(a<d) m=d-a;
      else m=0;
    else m=b-a;
 printf("%d",m) ;  
    return 0;
}