#include <stdio.h>
int main()
{
    char n[4];
    scanf("%s",n);
    int a=n[0]-'0';
    if(a==2||a==5||a==7||a==9||a==4)
    printf("hon");
    if(a==0||a==1||a==6||a==8)
    printf("pon");
    if(a==3)
    printf("bon");
}
