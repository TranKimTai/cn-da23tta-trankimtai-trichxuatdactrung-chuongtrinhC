#include<stdio.h>
int main(void){
	int A;
    int B;
  printf("A?/n");
  scanf("%d/n",&A);
	
  printf("B?/n");
  scanf("%d/n",&B);
  
  if(1<=A<=9 && 1<=B<=9){
    printf("A*B");
  }
  else if(10<=A<=20 || 10<=B<=20){
    printf("-1");
  }
  return 0;
}
  
    