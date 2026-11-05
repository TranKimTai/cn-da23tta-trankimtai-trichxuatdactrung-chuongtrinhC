#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int cmp(const void *a,const void *b){
    if(*(int*)a>*(int*)b){return -1;}
    else if(*(int*)a<*(int*)b){return 1;}
    else {return 0;}
}
int min(int a,int b){

    if(a>=b){return b;}
    return a;
}

int main(void){
    //0000<=a<=9999
int a;
scanf("%d",&a);
int mn,yr;
mn=(a%10)+(((a/10)%10)*10);
yr=(a/10/10%10)+(a/10/10/10%10*10);
if(1<=mn&&mn<=12&&1<=yr&&yr<=12){printf("AMBIGUOUS");}
else if(1<=mn&&mn<=12){printf("YYMM");}
else if(1<=yr&&yr<=12){printf("MMYY");}
else {printf("NA");}

}