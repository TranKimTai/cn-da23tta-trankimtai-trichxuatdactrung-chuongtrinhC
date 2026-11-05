#include<stdio.h>
int main(void){
int A,B,C,D;
scanf("%d %d %d %d",&A,&B,&C,&D);
if(A<=C){
  if(B<D){
    printf("%d\n",B-C);
  }
  else {
    printf("%d\n",D-C);
  }
}
else{
  if(B<D){
    printf("%d",B-A);
  }
  else{
    printf("%d",D-A);
  }
}
return 0;
}