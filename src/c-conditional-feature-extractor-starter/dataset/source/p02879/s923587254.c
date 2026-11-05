/* ABC144-A
   Takatan */

#include<stdio.h>
int main(void){
    int number1, number2;

    scanf( "%d %d" , &number1, &number2);
    if(number1>=1 && number1 <=9 && number2>=1 && number2<=9){
        printf( "%d\n" , number1 * number2); /* 九九の範囲のとき */
    }else{
        printf( "-1\n" ); /* 九九の範囲外のとき */
    }
    return 0;
}