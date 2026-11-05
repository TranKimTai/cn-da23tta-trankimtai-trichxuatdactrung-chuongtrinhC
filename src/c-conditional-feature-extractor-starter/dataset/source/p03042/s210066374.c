#include<stdio.h>

int main(void){
char S[5];
int f,e;

scanf("%s",S);
f=(S[0]-'0')*10+S[1]-'0';
e=(S[2]-'0')*10+S[3]-'0';

if((f<=12)&&(f>=1)){/*前がmm OK*/
   if((e<=12)&&(e>=1)){/*後ろがmmOK*/
      printf("AMBIGUOUS\n");
     }else{printf("MMYY\n");}
  }else{/*前がmmNG*/
   if((e<=12)&&(e>=1)){/*後ろがmmOK*/
      printf("YYMM\n");
     }else{printf("NA\n");}
  }


return 0;
}
