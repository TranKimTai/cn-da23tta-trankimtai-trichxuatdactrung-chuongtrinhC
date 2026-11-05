#include<stdio.h>
int main()
{
    int A,B,C,D,x,p,q;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    p=B-A,q=D-C;
    if(A<C)
    {
        if(B<=C) x=0;
        else {if(B-C<q) x=B-C;
              else x=q;}
    }
    else if(A==C)
        x=0;
    else {
        if(D<=A) x=0;
        else { if(D-A<p) x=D-A;
               else x=p;}
    }
    printf("%d",x);
    return 0;
}
