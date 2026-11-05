#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  int i,j,k;
  char S[4];
  scanf("%d",&k);
  int A,B;
  /*A=(S[0]*10+atoi(S[1]);
  B=atoi(S[2])*10+atoi(S[3]);*/
  
  A = k /100;
  B = k % 100;
  
  if(A >= 1 && A<=12){
    if(B >= 1 && B<=12){
      puts("AMBIGUOUS");
      return 0;
    }
    else if(B>=0){
      puts("MMYY");
      return 0;
    }
  }
  /*else if(A>=13){
    if(B >= 1 && B<=12){
      puts("YYMM");
      return 0;
    }
    else{
      puts("NA");
      return 0;
    }
  }*/
  else if(B >=1 && B <= 12){
    if(A>=0){
      puts("YYMM");
      return 0;
    }
  }
  puts("NA");
  return 0;
}


