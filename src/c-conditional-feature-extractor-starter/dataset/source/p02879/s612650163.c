//おまじない
#include <stdio.h>

 
int main() {
  int n;
  scanf("%d",&n);
  int f=0;
  for(int i=1;i<=9;i++){
    if(n%i==0){
      if(1<=n/i&&n/i<=9){
        f++;
        break;
      }
    }
  }
  
  if(f==1){
    printf("Yes\n");
  }
  
  else{
    printf("No\n");
  }
}
     

      
