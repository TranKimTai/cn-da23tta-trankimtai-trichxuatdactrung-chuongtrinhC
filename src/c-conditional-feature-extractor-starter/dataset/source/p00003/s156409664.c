#include <stdio.h>

int main(void){
  int num, tmp, max;
  int i, j, k;
  int e[3];

  scanf("%d", &num);

  for(i=0;i<num;i++){
    scanf("%d %d %d", &e[0], &e[1], &e[2]);
    for(j=0;j<2;j++){
      for(k=2;j<k;k--){
        if(e[j] <= e[k]){
          tmp = e[j];
          e[j] = e[k];
          e[k] = tmp;
        }
      }
    }
    if(e[0] * e[0] == e[1] * e[1] + e[2] * e[2]){
      printf("YES\n");
    }else{
      printf("NO\n");
    } 
  }
  return 0;
}