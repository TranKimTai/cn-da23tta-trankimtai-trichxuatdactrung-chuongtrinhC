#include<stdio.h>

int main()
{
  int m[100],f[100],r[100],i,count;
  i=0;
  scanf("%d %d %d",&m[i],&f[i],&r[i]);

  while(m[i]+f[i]+r[i]!=-3){             // ??\???
    i++;
    scanf("%d %d %d",&m[i],&f[i],&r[i]);
  }

  count=i;
  for(i=0;i<count;i++)                //??????
  if(m[i]==-1 ||f[i]==-1 ||m[i]+f[i]<30){ //??????
    printf("F\n");
  }else if(m[i]+f[i]>=80){
    printf("A\n");
  }else if(m[i]+f[i]>=65){
    printf("B\n");
  }else if(m[i]+f[i]>=50){
    printf("C\n");
  }else if(m[i]+f[i]>=30 || r[i]>=50){
    printf("D\n");
  }

  return 0;
}