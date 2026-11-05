#include <stdio.h>
int main(void){
  int A,B,C,D;
  scanf("%d %d %d %d",&A,&B,&C,&D);
  int min,max,s;
  if(A>C){
    min=A;
  }
  else{
    min=C;
  }
  if(B<D){
    max=B;
  }
  else{
    max=D;
  }
  s=max-min;
  if(s>0){
    printf("%d\n",max-min);
  }
  else{
    printf("0\n");
  }
  return 0;
}