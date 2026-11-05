#include <stdio.h>
 void main(){
     int N,a;
     char hon[]="hon",pon[]="pon",bon[]="bon";
     scanf("%ld",&N);
     a=N%10;
     if(a==3)
        printf("%s\n",bon);
     else if(a==0||a==1||a==6||a==8)
        printf("%s\n",pon);
     else
        printf("%s\n",hon);
 }