#include<stdio.h>
#include<string.h>

int main(){
  int k;
  char str[200], copy[200];
  scanf("%d",&k);
  scanf("%s",str);
  if(strlen(str)>k){
    memcpy(copy,str,k);
    printf("%s...\n",copy);
  }else {
    printf("%s\n",str);
  }
  return 0;
}