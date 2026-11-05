#include<stdio.h>
#include<string.h>

int main(){
  char month[12][2]={"01","02","03","04","05","06","07","08","09","10","11","12"};
  char s[4];
  int i,c1=0,c2=0;
  scanf("%s",s);
  for(i=0;i<12;i++){
    if(strncmp(s,month[i],2)==0)
      c1++;
    if(strncmp(&*(s+2),month[i],2)==0)
      c2++;
  }
  if(c1==1 && c2==1)
    printf("AMBIGUOUS\n");
  else if(c1==1 && c2==0)
    printf("MMYY\n");
  else if(c1==0 && c2==1)
    printf("YYMM\n");
  else
    printf("NA\n");
  return 0;
}