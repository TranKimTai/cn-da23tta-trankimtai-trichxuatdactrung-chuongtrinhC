#include<stdio.h>

int main(void)
{
  int a,b,c;

  if(scanf("%d",&a)==1){

    b=a/100;
    c=a%100;

    if(b==0){puts("NA");}
    
    else if(b>12){
      if(c==0 || c>12){puts("NA");}
      else{puts("YYMM");}
    }
    else if(b<=12){
      if(c==0){puts("NA");}
      else if(c>12){puts("MMYY");}
      else{puts("AMBIGUOUS");}
    }
  }else{
    puts("error");
  }

  return 0;
}