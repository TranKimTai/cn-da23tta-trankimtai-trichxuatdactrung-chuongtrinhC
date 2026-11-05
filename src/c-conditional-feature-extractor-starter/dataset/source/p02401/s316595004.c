#include<stdio.h>
int main(){
  int a,b;
  char op;
  scanf("%d %c %d",&a,&op,&b);
  while(op=='?'){
    break;
  }
    
    if(a<0 |  b>20000 | b==0){
      printf("Error\n");
    }

  else if(op=='+'){

    printf("%d\n",a+b);

  }else if(op=='-'){

    printf("%d\n",a-b);

  }else if(op=='*'){

    printf("%d\n",a*b);

  }else if (op=='/' ){

    printf("%d\n",a/b);
    }
  
      return 0;
}