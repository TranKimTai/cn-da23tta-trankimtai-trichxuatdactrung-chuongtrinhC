#include<stdio.h>
#include<string.h>

int main(){
  
  int A,B,C,D;
  scanf("%d %d %d %d",&A,&B,&C,&D);
  int numA[100]={0};
  int numC[100]={0};
  int result = 0;

  for(int i=A; i<=B; i++){
    numA[i]++;
  }

  for(int i=C; i<=D; i++){
    numC[i]++;
  }

  for(int i=1; i<=100; i++){
    if(numA[i] == 1 && numC[i] == 1 ){
      result ++;
    }
  }

  if( result == 0){
    printf("0");
  }else{
    printf("%d",result-1);
  }

  return 0;

}