#include <stdio.h>

int main(void)
{
  int S,mmyy_flag=1,yymm_flag=1,up_2_dig,und_2_dig;
  
  scanf("%d",&S);
  up_2_dig=S/100;
  
  und_2_dig=S-up_2_dig*100;
 
  if(up_2_dig<=12 && up_2_dig!=0 && und_2_dig<=12 && und_2_dig!=0)
  {
    printf("AMBIGUOUS\n");
  }
 
  else if(up_2_dig<=12 && up_2_dig!=0 && (und_2_dig>=12 || und_2_dig==0))
  {
    printf("YYMM\n");
  }
    
  else if(und_2_dig==0 && up_2_dig==0 || und_2_dig>12 && up_2_dig>12 || und_2_dig==0 && up_2_dig>12 || und_2_dig>12 && up_2_dig==0)
  {
    printf("NA\n");
  }
 
  else
  {
    printf("MMYY\n");
  }
  
  return 0;
}