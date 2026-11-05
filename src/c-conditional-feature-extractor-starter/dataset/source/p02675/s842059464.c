#include <stdio.h>
 
int main(void)
{

  int number;
  int digit = 0;
  int onekurai;
  int tenkurai;
 
  scanf("%d", &number);
 
  while(number!=0){
    number = number / 10;
    ++digit;
  }
 
  if (digit == 1){
  	 onekurai = number;
  }
  else if (digit == 2){
  	      onekurai = number%10;
  }
  else if (digit == 3){
  	      tenkurai = number%100;
  	      onekurai = tenkurai%10;
  }
  
  if(onekurai == 2){
  	printf("hon\n");
  }
  else if (onekurai == 4){
  	printf("hon\n");
  }
  else if (onekurai == 5){
  	printf("hon\n");
  }
  else if (onekurai == 7){
  	printf("hon\n");
  }
  else if (onekurai == 9){
  	printf("hon\n");
  }
  else if (onekurai == 0){
  	printf("pon\n");
  }
  else if (onekurai == 1){
  	printf("pon\n");
  }
  else if (onekurai == 6){
  	printf("pon\n");
  }
  else if (onekurai == 8){
  	printf("pon\n");
  }
  else if (onekurai == 3){
  	printf("bon\n");
  }
  
  return 0;
}
