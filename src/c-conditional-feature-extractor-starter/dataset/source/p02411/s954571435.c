#include<stdio.h>
int main(void)
{
  int m,f,r,i,j;
  i = 0;
  char grade[10000];
  while(1){
    scanf("%d %d %d",&m,&f,&r);
    if(m == -1 && f == -1 && r == -1){
      break;
    }
    if(m == -1 || f == -1 || m + f < 30){
      grade[i] = 'F';
    }else if(m + f >= 80){
      grade[i] = 'A';
    }else if(m + f >= 65 && m + f < 80){
      grade[i] = 'B';
    }else if(m + f >= 50 && m + f < 65){
      grade[i] = 'C';
    }else if(m + f >= 30 && m + f < 50){
      grade[i] = 'D';
      if(r >= 50){
        grade[i] = 'C';
      }
    }
    i++;
  }
  printf("\n");
  for(j = 0;j <= i;j++){
    printf("%c\n",grade[j]);
  }
  return 0;
}