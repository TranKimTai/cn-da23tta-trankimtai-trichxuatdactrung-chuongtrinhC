#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num,digit;
	printf("Enter a number:");
	scanf("%d",&num);

	digit=num%10;
	if(digit==2)
        printf("hon");
    if(digit== 4)
        printf("hon");
    if(digit==5 )
        printf("hon");
    if(digit==7 )
        printf("hon");
    if(digit==9 )
        printf("hon");
    if(digit==0 )
        printf("pon");
    if(digit==1)
        printf("pon");
    if(digit==6)
        printf("pon");

    if(digit==8)
        printf("pon");
    if(digit==3)
        printf("bon");
    
}
