#include <stdio.h>
int main(void){
  int m,f,r,s;
  while(scanf(" %d%d%d",&m,&f,&r)) {
    if(m==-1&&f==-1&&r==-1)break;
    s=0;
    s+=m>=0?m:-100;
    s+=f>=0?f:-100;
    if(s>=80)printf("A\n");
    else if(s>=65)printf("B\n");
    else if(s>=50)printf("C\n");
    else if(s>=30)printf("%c\n",r>=50?'C':'D');
    else printf("F\n");
  }
  return 0;
}