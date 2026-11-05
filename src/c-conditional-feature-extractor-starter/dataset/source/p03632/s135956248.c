#include<stdio.h>
/*0≤a<b≤100
0≤c<d≤100
All input values are integers.*/
int main()
{
    int a,b,c,d,k,min,max;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(d<=a||c>=b)
         k=0;
    else{
        min=b;
        max=a;
        if(min>d)
            min=d;
        if(max<c)
            max=c;
    k=min-max;
    }

        printf("%d",k);
}
