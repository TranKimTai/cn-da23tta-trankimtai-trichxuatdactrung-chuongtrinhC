#include<stdio.h>
int main()
{
    int i,h,len,j,n,k;
    scanf("%d%d",&h,&n);
if((h<=9&&h>=1)&&(n>=1&&n<=9)){
    printf("%d\n",h*n);
}
      else{ printf("-1\n");}

    return 0;
}
