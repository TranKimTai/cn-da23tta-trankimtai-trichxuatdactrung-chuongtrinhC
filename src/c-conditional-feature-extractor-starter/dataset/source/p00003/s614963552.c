#include<stdio.h>
int main()
{
    int i,t,a,b,c,x,y,z;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if((x*x+y*y==z*z)||(y*y+z*z==x*x)||(z*z+x*x==y*y))
            printf("yes\n");
        else
            printf("No\n");
    }

    return 0;
}