#include <stdio.h>

int main(void) {
    int numA;
    int numB;
    int numC;

  if(scanf("%d%d%d", &numA, &numB, &numC)!=1){
    
    if(numA==numB && numA==numC){
        printf("No");
    }else if(numA!=numB && numA!=numC && numB!=numC){
        printf("No");
    }else{
        printf("Yes");
    }
  }
    
    return 0;
}

