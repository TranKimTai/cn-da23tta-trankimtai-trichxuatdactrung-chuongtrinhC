#include <stdio.h>

int main(){

int r,m,f;

while(1){

 scanf("%d%d%d",&r,&m,&f);
 if((r==-1)&&(m==-1)&&(f==-1))break;
 if((r==-1)||(m==-1))printf("F\n");
 else if((r+m)>=80)printf("A\n");
 else if((r+m)>=65)printf("B\n");
 else if((r+m)>=30){
  if(f>=50)printf("C\n");
  else printf("D\n");
 }else printf("F\n");

}

return 0;
}