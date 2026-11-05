#include <stdio.h>

int main()
{
  int n,i,j,k;
  int m,f,r;

  scanf("%d",&m);
  scanf("%d",&f);
  scanf("%d",&r);
  while (!((m==-1) && (f==-1) && (r==-1))){
    if (m+f>=80){
      printf("%c\n",'A');
    }else if(m+f>=65){
      printf("%c\n",'B');
    }else if(m+f>=50){
      printf("%c\n",'C');
    }else if(m+f>=30){
      if (r>=50){
        printf("%c\n",'C');
      }else{
        printf("%c\n",'D');
      }
    }else{
      printf("%c\n",'F');
    }
    scanf("%d",&m);
    scanf("%d",&f);
    scanf("%d",&r);
  }


  return 0;
}