#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define rep(i,n) for(int i=0; i < (n); i++)
int main(){
  char n[1000];
  scanf("%s",n);
  int len=strlen(n)-1;
  printf("%d\n", len);
  if(n[len]=='3'){
    printf("bon");
    return 0;
  }else if(n[len]=='0'){
    printf("pon");
  }else if(n[len]=='6'){
    printf("pon");
  }else if(n[len]=='1'){
    printf("pon");
  }else if(n[len]=='8'){
    printf("pon");
  }else{
    printf("hon");
  }
  return 0;
}
