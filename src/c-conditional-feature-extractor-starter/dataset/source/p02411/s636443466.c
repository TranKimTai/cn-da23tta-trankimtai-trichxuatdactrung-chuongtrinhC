#include <stdio.h>
int main()
{
int m,f,r,sum;
while (1){
        scanf("%d%d%d",&m,&f,&r);
    if ((m==-1) && (f==-1) && (r==-1)){break;}
    if ((m==-1)|| (f==-1)){puts("F");}
    else{
        sum=m+f;

        if (sum>=80){puts("A");}
        else if ((sum>=65)&& (sum<80)){puts("B");}
        else if ((sum>=50)&& (sum<65)){puts("C");}
        else if (sum<30){puts("F");}
        else puts((r>=50)? "C":"D");
    }
}














return 0;}

