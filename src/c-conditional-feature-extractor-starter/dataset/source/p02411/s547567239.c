#include <stdio.h>
int main(){
  int  m,f,r,sum=0;
  while(1){
  scanf("%d%d%d",&m,&f,&r);
  sum=m+f;
  if(m==-1 && f==-1 && r==-1)break;
  if(m==-1 || f==-1)printf("F\n");
  else if(sum>=80)printf("A\n");
  else if(sum>=65)printf("B\n");
  else if(sum>=50)printf("C\n");
  else if(sum>=30)
    {
      if(r>=50)printf("C\n");
      else printf("D\n");
    }
  else printf("F\n");
  

  
}


  return 0;
}
    