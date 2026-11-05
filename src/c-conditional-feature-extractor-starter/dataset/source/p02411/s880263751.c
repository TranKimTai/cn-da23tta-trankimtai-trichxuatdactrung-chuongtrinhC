#include <stdio.h>
char judge(int ,int ,int );

int main(void){
  int m,f,r;
  char c;
  
  while(1){
    scanf("%d %d %d",&m,&f,&r);
    if(m+f+r==-3)break;
    c=judge(m,f,r);
    printf("%c\n",c);
  }
  
  return 0;
}

char judge(int M,int F,int R){
  int sum=M+F;
  if(sum>=80)return 'A';
  else if(sum>=65) return 'B';
  else if(sum>=50) return 'C';
  else if(sum>=30||(sum>=30 && R>=50))return 'C';
  else if(sum>=30)return 'D';
  else return 'F';
}