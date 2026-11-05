#include<stdio.h>


int main()
{
 int i,j,a,b,c ;
 float x,y,d ;
 char s[34534] ;
 scanf("%d",&a) ;
 b=a%10 ;
 if(b==2||b==4||b==5||b==7||b==9)
    printf("hon") ;
 else if(b==0||b==1||b==6||b==8)
    printf("pon") ;
 else
    printf("bon") ;
 return 0 ;
}
