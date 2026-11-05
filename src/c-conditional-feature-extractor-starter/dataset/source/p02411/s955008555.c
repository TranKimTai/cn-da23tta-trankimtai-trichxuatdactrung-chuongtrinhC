#include<stdio.h>
 
int main(void)
{
  int m,f,r;
  int ad;
 
 
   
  while(1){
    scanf("%d %d %d",&m,&f,&r);
    ad = m+f;
    if(ad == -2 && r == -1){
      break;
    }
    else if((m == -1||f == -1)||(ad <30)){
      printf("F\n");
    }
    else if(ad >=80){
      printf("A\n");
    }
    else if(ad >=65 && ad <80){
      printf("B\n");
    }
    else if((ad >=50 && ad <65)||(r >=50)){
      printf("C\n");
    }
    else if(ad >=30 && ad <50){
      printf("D\n");
    }
  }
  return 0;
}