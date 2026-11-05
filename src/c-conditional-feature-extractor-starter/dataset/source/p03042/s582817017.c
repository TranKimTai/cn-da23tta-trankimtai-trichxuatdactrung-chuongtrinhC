#include <stdio.h>
int main() {
int s,res,ues;
scanf("%d",&s);
res=s/100;
ues=s%100;
if(ues<=12 && ues>=1){
  if(res<=12 && res>=1)printf("AMBIGUOUS");
else printf("YYMM");
}else{
  if(res<=12 && res>=1)
    printf("MMYY");
  else printf("NA");
  }

  return 0;
}
