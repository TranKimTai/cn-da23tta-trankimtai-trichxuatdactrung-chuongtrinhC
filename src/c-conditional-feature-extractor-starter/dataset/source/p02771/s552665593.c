#include <stdio.h>

int main(void) {
    int numA;
    int numB;
    int numC;
    

  printf("A");
  scanf("%d", &numA);

  printf("B");
  scanf("%d", &numB);

  printf("C");
  scanf("%d", &numC);
    
    if(numA==numB && numA==numC){
        printf("No");
    }else if(numA!=numB && numA!=numB && numB!=numC){
        printf("No");
    }else{
        printf("Yes");
    }
    
    return 0;
}
