#include<stdio.h>
#include<string.h>
 
int main(){
 
int N[1000];
char a[5];
int  l=strlen(N);
scanf("%d",&N);
if(N[l]==3){
  printf("bon");
}else if((N[l]==0)||(N[l]==6)||(N[l]==1)||(N[l]==8)){
  printf("pon");
}else{
  printf("hon");
}
  return 0;
}
