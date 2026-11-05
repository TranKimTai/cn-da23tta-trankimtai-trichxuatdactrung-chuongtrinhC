#include<stdio.h>

int main(){
  char str[5];
  char ans[4][16]={"AMBIGUOUS\n","YYMM\n","MMYY\n","NA\n"};
  int i = 0;
  scanf("%s",str);
  if(str[0] > '1'||(str[0]=='1'&&str[1]>'2')||(str[0] == '0'&&str[1]=='0')){i++;}
  if(str[2] > '1'||(str[2]=='1'&&str[3]>'2')||(str[2] == '0'&&str[3]=='0')){i+=2;}
  printf(ans[i]);
  return 0;
}