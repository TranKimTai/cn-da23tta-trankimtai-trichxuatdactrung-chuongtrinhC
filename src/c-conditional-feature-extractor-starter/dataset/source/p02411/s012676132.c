#include<stdio.h>

int main(){
 int m,f,r;
 while(1){
  scanf("%d %d %d", &m, &f,&r);
  if(m==-1 && f==-1 && r==-1){break;}
  else if(m==-1 && f==-1){printf("F\n");}
  else if(m+f>=80){printf("A\n");}
  else if(65<=f+m && f+m<80){printf("B\n");}
  else if(50<=f+m && f+m<65 || r>=50){printf("C\n");}
  else if(30<=f+m && f+m<50 &&r<50){printf("D\n");}
  else if(f+m<30 && r<50){printf("F\n");}
  else{break;}
 }
 return 0;
}