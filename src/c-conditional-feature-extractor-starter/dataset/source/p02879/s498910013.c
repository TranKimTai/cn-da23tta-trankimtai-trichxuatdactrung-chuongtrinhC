#include<stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    int mul = 0;

    scanf("%d",&num1); scanf("%d", &num2);

    if((num1 <=9 && num1 > 0) && (num2 <=9 && num2 > 0)){
        mul = num1*num2;
        printf("%d", mul);
    }else{ printf("%d",1);}



    return 0;
}
