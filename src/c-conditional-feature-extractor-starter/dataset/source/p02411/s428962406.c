#include<stdio.h>

int main(){

  int m[100],f[100],r[100];
  int i,total[100];





  while(1){
    i=0;
  scanf("%d %d %d",&m[i],&f[i],&r[i]);

  total[i]=m[i]+f[i];

  if(m[i]==-1 && f[i]==-1 && r[i]==-1)
    break;

  else if(total[i] >= 80)
    puts("A");

  else if(total[i] >= 65 && total[i] < 80)
    puts("B");

  else if(total[i] >= 50 && total[i] < 65)
    puts("C");

  else if(total[i] >= 30 && total[i] < 50 )
    puts("D");

 else if(total[i] >= 30 && total[i] < 50 && r[i] >=50 )
    puts("C");

  else if(total[i] < 30 )
    puts("F");

  i++;
  }

  return 0;
}