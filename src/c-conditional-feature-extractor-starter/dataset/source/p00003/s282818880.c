#include<stdio.h>
#include<string.h>

int main(){
  int a, b, c;
  int N;
  int i;
  scanf("%d\n", &N);
  
  int ans[N];
  memset(ans, 0, sizeof(ans));
  for(i=0;i<N;i++){
    scanf("%d %d %d\n", &a, &b, &c);
    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
      ans[i] = 1;
    } else {
      ans[i] = 0;
    }
  }
  for(i=0;i<N;i++){
    if(ans[i]==1) {
      printf("YES\n");
    }else{ 
      printf("NO\n");
    }
  }
  return 0;
}