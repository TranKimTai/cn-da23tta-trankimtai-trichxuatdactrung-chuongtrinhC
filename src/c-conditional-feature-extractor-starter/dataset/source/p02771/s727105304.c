#include <stdio.h>

int main(){
  int A,B,C;
  int S=0;
  scanf("%d %d %d",&A,&B,&C);
  if(A==B) S++;
  if(B==C) S++;
  if(C==A) S++;
  if(S==1) printf("Yes\n");
  else printf("No\n");
  return 0;
}