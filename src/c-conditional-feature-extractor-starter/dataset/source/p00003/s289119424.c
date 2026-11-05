#include<stdio.h>
int main(){
  int i,cnt,num1,num2,num3,temp=0;
  scanf("%d",&cnt);
  for(i=0; i<cnt; i++){
  scanf("%d %d %d",&num1,&num2,&num3);
    if(num2 > num1){
      temp=num1;
      num1=num2;
      num2=temp;
    }
    if(num3 > num1){
      temp=num1;
      num1=num3;
      num3=temp;
    }
    if((num1*num1) ==((num2*num2)+(num3*num3))){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
  return 0;
}