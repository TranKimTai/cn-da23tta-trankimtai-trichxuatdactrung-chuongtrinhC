#include <stdio.h>
int main ()
{
    int a,b,c,i,t;
      scanf("%d", &t);
    for(i=1;i<=t;i++){
    scanf("%d %d %d", &a,&b,&c);
    if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){
     printf("YES\n");
}
else {
printf("NO\n");
}
}
return 0;
}