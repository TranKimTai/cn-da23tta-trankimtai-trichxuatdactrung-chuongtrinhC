#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d",&a,&b);
if((a>=1 && a<=9)&&(b>=1 && b<=9))
{c=a*b;printf("%d\n",c);
}
else printf("-1\n");
return 0;
}
