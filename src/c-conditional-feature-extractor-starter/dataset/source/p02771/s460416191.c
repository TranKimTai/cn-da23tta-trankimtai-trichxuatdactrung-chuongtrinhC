#include<stdio.h>

int main(void){
  int A,B,C;
  
  do{
    scanf("%d %d %d\n",&A,&B,&C);
  }while(A<1||A>9||B<1||B>9||C<1||C>9);
  
  if(A==B==C)
    printf("No");
  else{
    if(A==B)
      printf("Yes");
  	else if(B==C)
      printf("Yes");
  	else if(C==A)
      printf("Yes");
  	else
      printf("No");
	}
  return 0;
}