#include<stdio.h>
int main()
{
    int a,b,c,d,k;
    printf("enter numbers 0<=a<=b<=100,0<=c<=d<=100:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(d<=a||c>=b)
         k=0;
    else if(c<=a&&d<=b)
        k=d-a;
    else if(c>=a&&d<=b)
         k=d-c;
    else
        k=b-c;
        printf("%d",k);
}