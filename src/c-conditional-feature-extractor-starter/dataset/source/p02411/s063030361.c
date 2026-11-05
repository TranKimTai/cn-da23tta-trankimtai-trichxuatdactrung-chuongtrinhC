#include <stdio.h>

#define NUMBER 1000

int main(void){
  int m[NUMBER], f[NUMBER], r[NUMBER];
  int total[NUMBER];
  int i=0, j=0;

  while(1){
    scanf("%d %d %d", &m[i], &f[i], &r[i]);
    if(m[i]==-1 && f[i]==-1 && r[i]==-1)
      break;
    if(m[i]>50 || f[i]>50 || r[i]>100){
      printf("?????°?????????????¶????????????????\n");
      scanf("%d %d %d", &m[i], &f[i], &r[i]);
    }
    total[i]=m[i]+f[i];
    i++;
    j=i;
  }

  for(i=0; i<j; i++){
    if(m[i]==-1 || f[i]==-1){
      printf("F\n");
    }else if(total[i]>=80){
      printf("A\n");
    }else if(total[i]>=65 && total[i]<80){
      printf("B\n");
    }else if(total[i]>=50 && total[i]<65){
      printf("C\n");
    }else if(total[i]>=30 && total[i]<50 && r[i]>=50){
      printf("C\n");
    }else if(total[i]>=30 && total[i]<50){
	printf("D\n");
    }else if(total[i]<30){
      printf("F\n");
    }
  }
  return 0;
}