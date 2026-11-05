#include <stdio.h>
int main(){
  int po[100][3],to[100],num=-1;
  int i,j;
  while(1){
    num=num+1;
    scanf("%d %d %d",&po[num][0],&po[num][1],&po[num][2]);
    if(po[num][0]==-1&&po[num][1]==-1&&po[num][2]==-1)break;
  }
  for(i=0; i<num; i++){
    to[i]=po[i][0]+po[i][1];
    if((po[i][0]+po[i][1])<30||po[i][0]==-1||po[i][1]==-1)printf("%c\n",'F');
    else if((po[i][0]+po[i][1])>=80)printf("%c\n",'A');
    else if(to[i]>=65&&to[i]<80)printf("%c\n",'B');
    else if(to[i]>=50&&to[i]<65)printf("%c\n",'C');
    else if(to[i]>=30&&to[i]<50&&po[i][2]>=50)printf("%c\n",'C');
    else printf("%c\n",'D');
  }
  return 0;
}

