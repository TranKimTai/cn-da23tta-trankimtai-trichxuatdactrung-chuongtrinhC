#include<stdio.h>

int main()

{
    int a , b ;

    scanf("%d", &a) ;

    b=a%10 ;

    if(b==2||b==4||b==5||b==7||b==9)
    {
        printf("hon\n") ;
    }
    else if(b==0||b==1||b==6||b==8)
    {
        printf("pon\n") ;
    }
    else if(b==3)
    {
        printf("bon\n") ;
    }

    return 0;
}
