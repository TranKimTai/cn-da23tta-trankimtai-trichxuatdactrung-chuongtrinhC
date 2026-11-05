#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(void)
{
  char s[5];
  int n;
  bool my=0,ym=0;
  scanf("%s",s);
  n=atoi(s);
  if((n/100<13)&&(n/100>0)){
    my=1;
  }
  if((n%100<13)&&(n%100>0)){
    ym=1;
  }
  switch(my&&ym){
    case true: puts("AMBIGUOUS");return 0;
    case false:
    if(my==true){
      puts("MMYY");return 0;
    }else if(ym==true){
      puts("YYMM");return 0;
    }else{
      puts("NA");return 0;  
    }
  }
}
