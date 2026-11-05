#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
int a,b,c,d;
int yes=0;
scanf("%d %d %d %d",&a,&b,&c,&d);

for(int i=0;i<105;i++){
    if((a<=i&&i<=b)&&(c<=i&&i<=d)){yes++;}
}
if(yes>0){yes=yes-1;}
printf("%d\n",yes);
}