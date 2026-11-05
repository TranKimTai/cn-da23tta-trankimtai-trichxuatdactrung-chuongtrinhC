#include<stdio.h>

int main(){
  int a = 0;
  int b = 0;
  int x = 0;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &x);

  if(a < x){
    if(a + b >= x){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }else{
    printf("NO\n");
  }

  return 0;
}
