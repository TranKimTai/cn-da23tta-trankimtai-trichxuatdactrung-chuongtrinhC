#include <stdio.h>

int main()
{
    int i,a,b,tmp;
    int s;
    b= 0;
    scanf("%d",&s);
    tmp = s%10;
    b+=tmp;
    s/=10;
    tmp = s%10;
    b+=tmp*10;
    s/=10;
    if(s<=12 && s>=1){
        if(b<=12 && b>=1){
            printf("AMBIGUOUS");
        }else printf("MMYY");
    }else if(b<=12 && b>=1) printf("YYMM");
    else printf("NA");
}
