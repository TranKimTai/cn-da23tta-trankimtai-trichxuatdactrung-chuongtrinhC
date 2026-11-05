/* ex3_2
  terakura */

#include <stdio.h>

int main(void){

  int n;
  scanf("%d", &n);

//10で割った余りで分類
  if(n % 10 == 3 ){
    printf("bon\n"); //10で割った余りが３の時”bon”

  }else if(n % 10 == 0 || n % 10 == 1 || n % 10 == 6 || n % 10 == 8){
    printf("pon\n"); //10で割った余りが0,1,6,8の時”pon”

  }else{
    printf("hon\n"); //10で割った余りが2,4,5,7,9の時”hon”
  }

  return 0;
}
