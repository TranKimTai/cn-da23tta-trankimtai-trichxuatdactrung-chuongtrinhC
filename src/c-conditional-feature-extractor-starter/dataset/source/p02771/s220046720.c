//ネスト深すぎてゴミ、分かりづらい

#include<stdio.h>
int main(){
  int A,B,C;
  scanf("%d %d %d", &A, &B, &C);
  
  if(A != B){ //ABが異なる場合、A=Cでかわいそう
    if(A == C){
      printf("Yes");
    }else{
      printf("No");
    }
  }else if(A != C){ //ACが異なる場合、A=Bでかわいそう
   if(A == B){
      printf("Yes");
    }else{
      printf("No");
    }
  }else if(B != C){ //BCが異なる場合、A=Bでかわいそう
     if(A == B){
      printf("Yes");
    }else{
      printf("No");
    }
  }else{
    printf("No");
  }
}