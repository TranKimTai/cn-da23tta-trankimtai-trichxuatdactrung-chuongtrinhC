#include "stdio.h"

int main(void){
  int x,y,z,i,flag;
  char a[5] = {'A','B','C','D','F'};
  for(i = 0; i < 1000; i++){

    scanf("%d %d %d", &x, &y, &z);
    if((x == -1) && (y == -1) && (z == -1))break;
    if((x == -1) || (y == -1) || (x + y < 30)){
      flag = 4;
    }else if(x + y >= 80){
      flag = 0;
    }else if(x + y >= 65){
      flag = 1;
    }else if(x + y >= 50){
      flag = 2;
    }else{
      if(z > 50){
        flag = 3;
      }else{
        flag = 4;
      }
    }
    printf("%c\n", a[flag]);

  }
}

