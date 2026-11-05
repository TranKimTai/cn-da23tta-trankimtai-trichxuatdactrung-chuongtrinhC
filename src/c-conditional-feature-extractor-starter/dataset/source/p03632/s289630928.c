#include<stdio.h>
int main()
{
    int A,B,C,D,i,j;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    i=A>=C?A:C;
    j=B<=D?B:D;
    if(j-i>0)printf("%d",j-i);
    else printf("0");
    return 0;
}
