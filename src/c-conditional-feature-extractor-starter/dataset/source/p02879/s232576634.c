#include<stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  int a=0;
  int i,j;
  for(i=1;i<10;i++){for(j=1;j<10;j++){if(i*j==n){a=1;
	break;
      }}if(j<=9){break;}
  }
    if(a==1){printf("Yes");}else{printf("No");
    } return 0;
  }
  
