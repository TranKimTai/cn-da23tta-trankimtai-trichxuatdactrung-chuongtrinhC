#include <stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n/100;
    b=n%100;
    //printf("%d %d",a,b);
    if(a<13 && b<13){
       printf("AMBIGUOUS\n");
       }
       else if(a<12){
        printf("MMYY\n");
       }
    else if(b<12){
        printf("YYMM\n");
       }
   else if(a>12 && b>12){
       printf("NA\n");
       }
    return 0;
}
